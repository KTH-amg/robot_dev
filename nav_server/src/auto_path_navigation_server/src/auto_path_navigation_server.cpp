#include "auto_path_navigation_server/auto_path_navigation_server.hpp"
#include <queue>
#include <limits>
#include <algorithm>

using namespace std::chrono_literals;
using std::placeholders::_1;
using std::placeholders::_2;

AutoPathNavigationServer::AutoPathNavigationServer() : Node("auto_path_navigation_server") {
    nav_through_poses_client_ = rclcpp_action::create_client<nav2_msgs::action::NavigateThroughPoses>(this, "/navigate_through_poses");
    navigation_command_publisher_ = this->create_publisher<std_msgs::msg::String>("navigation_command", 10);
    nav_command_subscriber_ = this->create_subscription<std_msgs::msg::String>(
        "navigation_command", 10,
        std::bind(&AutoPathNavigationServer::navigationCommandCallback, this, _1));
    // AMCL Pose 구독자
    std::string amcl_topic = "/amcl_pose";
    amcl_subscribers_ = this->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
        amcl_topic, 10, 
        std::bind(&AutoPathNavigationServer::amclCallback, this, _1));

    init_waypoints();
    init_nodes();

    start_waypoint_ = "lobby_station";  // 초기 출발지 고정 또는 실제 위치에서 계산 가능
    current_target_ = "";
}

void AutoPathNavigationServer::init_waypoints() {
    // 지도 좌표에 맞는 waypoint들 - 수정된 좌표
    waypoints_["gateway_b"] = {"Gateway B", -5.58, 4.03, 0.0, "통로 B"};
    waypoints_["gateway_a"] = {"Gateway A", 0, 4.03, 180.0, "통로 A"};
    waypoints_["colon_cancer"] = {"Colon Cancer Center", 0.79, -2.17, 0.0, "대장암 센터"};
    waypoints_["stomach_cancer"] = {"Stomach Cancer Center", 3.65, -2.17, 0.0, "위암 센터"};
    waypoints_["lung_cancer"] = {"Lung Cancer Center", 5.07, -2.17, 0.0, "폐암 센터"};
    waypoints_["breast_cancer"] = {"Breast Cancer Center", 7.67, 1.12, 180.0, "유방암 센터"};
    waypoints_["brain_tumor"] = {"Brain Tumor Center", 6.1, 1.12, 180.0, "뇌종양 센터"};
    waypoints_["lobby_station"] = {"Main Lobby", 9.26, -2.17, 90.0, "병원 로비 스테이션"};
    
    // 추가 검사실들 (기존 좌표 유지)
    waypoints_["x_ray"] = {"X-ray", -5.69, 4.34, 180.0, "X-ray 검사실"};
    waypoints_["ct"] = {"CT", -5.79, -1.88, 90.0, "CT 검사실"};
    waypoints_["echography"] = {"Echography", -4.9, -1.96, 90.0, "초음파 검사실"};
    
    RCLCPP_INFO(this->get_logger(), "Loaded %zu hospital waypoints", waypoints_.size());
}

void AutoPathNavigationServer::init_nodes() {
    // 목적지 노드들
    navigation_nodes_["gateway_b_entrance"] = {-5.58, 4.03, "gateway_b_entrance", {"gateway_bridge_6"}, 1.0};
    navigation_nodes_["gateway_a_entrance"] = {0, 4.03, "gateway_a_entrance", {"gateway_a_corridor_1", "gateway_bridge_1"}, 1.0};
    navigation_nodes_["colon_cancer_entrance"] = {0.79, -2.17, "colon_cancer_entrance", {"colon_approach"}, 1.0};
    navigation_nodes_["stomach_cancer_entrance"] = {3.65, -2.17, "stomach_cancer_entrance", {"stomach_approach"}, 1.0};
    navigation_nodes_["lung_cancer_entrance"] = {5.07, -2.17, "lung_cancer_entrance", {"lung_approach"}, 1.0};
    navigation_nodes_["breast_cancer_entrance"] = {7.67, 1.12, "breast_cancer_entrance", {"breast_approach"}, 1.0};
    navigation_nodes_["brain_tumor_entrance"] = {6.1, 1.12, "brain_tumor_entrance", {"brain_approach"}, 1.0};
    navigation_nodes_["lobby_entrance"] = {9.26, -2.17, "lobby_entrance", {"lobby_approach"}, 1.0};

    // Gateway A 수직 복도
    navigation_nodes_["gateway_a_corridor_1"] = {0, 3, "gateway_a_corridor_1", {"gateway_a_entrance", "gateway_a_corridor_2"}, 0.9};
    navigation_nodes_["gateway_a_corridor_2"] = {0, 2, "gateway_a_corridor_2", {"gateway_a_corridor_1", "main_junction_north"}, 0.9};
    navigation_nodes_["main_junction_north"] = {0, 1.21, "main_junction_north", {"gateway_a_corridor_2", "upper_horizontal_corridor_6", "gateway_a_corridor_4"}, 0.7};
    navigation_nodes_["gateway_a_corridor_4"] = {0, 0, "gateway_a_corridor_4", {"main_junction_north", "gateway_a_corridor_5"}, 0.9};
    navigation_nodes_["gateway_a_corridor_5"] = {0, -1, "gateway_a_corridor_5", {"gateway_a_corridor_4", "colon_approach"}, 0.9};
    navigation_nodes_["colon_approach"] = {0, -2.17, "colon_approach", {"gateway_a_corridor_5", "colon_cancer_entrance", "main_horizontal_corridor_1"}, 0.8};

    // 메인 수평 복도 (하부)
    navigation_nodes_["main_horizontal_corridor_1"] = {1, -2.17, "main_horizontal_corridor_1", {"colon_approach", "main_horizontal_corridor_2"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_2"] = {2, -2.17, "main_horizontal_corridor_2", {"main_horizontal_corridor_1", "main_horizontal_corridor_3"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_3"] = {3.11, -2.17, "main_horizontal_corridor_3", {"main_horizontal_corridor_2", "stomach_approach", "vertical_connector_1_mid", "main_horizontal_corridor_4"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_4"] = {4, -2.17, "main_horizontal_corridor_4", {"main_horizontal_corridor_3", "main_horizontal_corridor_5"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_5"] = {5, -2.17, "main_horizontal_corridor_5", {"main_horizontal_corridor_4", "main_horizontal_corridor_6"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_6"] = {5.87, -2.17, "main_horizontal_corridor_6", {"main_horizontal_corridor_5", "lung_approach", "vertical_connector_2_mid", "main_horizontal_corridor_7"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_7"] = {7, -2.17, "main_horizontal_corridor_7", {"main_horizontal_corridor_6", "main_horizontal_corridor_8"}, 0.7};
    navigation_nodes_["main_horizontal_corridor_8"] = {8, -2.17, "main_horizontal_corridor_8", {"main_horizontal_corridor_7", "lobby_approach"}, 0.7};
    navigation_nodes_["lobby_approach"] = {9, -2.17, "lobby_approach", {"main_horizontal_corridor_8", "lobby_entrance", "lobby_corridor_1"}, 0.8};

    // 로비 수직 복도
    navigation_nodes_["lobby_corridor_1"] = {9.26, -2, "lobby_corridor_1", {"lobby_approach", "lobby_corridor_2"}, 0.8};
    navigation_nodes_["lobby_corridor_2"] = {9.26, -1, "lobby_corridor_2", {"lobby_corridor_1", "lobby_corridor_3"}, 0.8};
    navigation_nodes_["lobby_corridor_3"] = {9.26, 0, "lobby_corridor_3", {"lobby_corridor_2", "lobby_corridor_4"}, 0.8};
    navigation_nodes_["lobby_corridor_4"] = {9.26, 1, "lobby_corridor_4", {"lobby_corridor_3", "breast_approach"}, 0.8};
    navigation_nodes_["breast_approach"] = {7.67, 1, "breast_approach", {"lobby_corridor_4", "breast_cancer_entrance", "upper_horizontal_corridor_1"}, 0.8};

    // 상부 수평 복도
    navigation_nodes_["upper_horizontal_corridor_1"] = {5.87, 1.12, "upper_horizontal_corridor_1", {"breast_approach", "brain_approach", "vertical_connector_2_top", "upper_horizontal_corridor_2"}, 0.8};
    navigation_nodes_["upper_horizontal_corridor_2"] = {5, 1.12, "upper_horizontal_corridor_2", {"upper_horizontal_corridor_1", "upper_horizontal_corridor_3"}, 0.8};
    navigation_nodes_["upper_horizontal_corridor_3"] = {4, 1.12, "upper_horizontal_corridor_3", {"upper_horizontal_corridor_2", "upper_horizontal_corridor_4"}, 0.8};
    navigation_nodes_["upper_horizontal_corridor_4"] = {3.11, 1.12, "upper_horizontal_corridor_4", {"upper_horizontal_corridor_3", "vertical_connector_1_top", "upper_horizontal_corridor_5"}, 0.8};
    navigation_nodes_["upper_horizontal_corridor_5"] = {2, 1.12, "upper_horizontal_corridor_5", {"upper_horizontal_corridor_4", "upper_horizontal_corridor_6"}, 0.8};
    navigation_nodes_["upper_horizontal_corridor_6"] = {1, 1.12, "upper_horizontal_corridor_6", {"upper_horizontal_corridor_5", "main_junction_north"}, 0.8};

    // 수직 연결 복도들
    navigation_nodes_["vertical_connector_1_top"] = {3.11, 0, "vertical_connector_1_top", {"upper_horizontal_corridor_4", "vertical_connector_1_mid"}, 1.0};
    navigation_nodes_["vertical_connector_1_mid"] = {3.11, -1, "vertical_connector_1_mid", {"vertical_connector_1_top", "main_horizontal_corridor_3"}, 1.0};

    navigation_nodes_["vertical_connector_2_top"] = {5.87, 0, "vertical_connector_2_top", {"upper_horizontal_corridor_1", "vertical_connector_2_mid"}, 1.0};
    navigation_nodes_["vertical_connector_2_mid"] = {5.87, -1, "vertical_connector_2_mid", {"vertical_connector_2_top", "main_horizontal_corridor_6"}, 1.0};

    // 목적지별 접근 노드
    navigation_nodes_["stomach_approach"] = {3.65, -2.17, "stomach_approach", {"main_horizontal_corridor_3", "stomach_cancer_entrance"}, 0.9};
    navigation_nodes_["lung_approach"] = {5.07, -2.17, "lung_approach", {"main_horizontal_corridor_6", "lung_cancer_entrance"}, 0.9};
    navigation_nodes_["brain_approach"] = {6.1, 1.12, "brain_approach", {"upper_horizontal_corridor_1", "brain_tumor_entrance"}, 0.9};

    // 기존 검사실 노드들 (X-ray, CT, 초음파)
    navigation_nodes_["xray_entrance"] = {-5.69, 4.34, "xray_entrance", {"xray_approach"}, 1.0};
    navigation_nodes_["ct_entrance"] = {-5.79, -1.88, "ct_entrance", {"gateway_bridge_11"}, 1.0};
    navigation_nodes_["echo_entrance"] = {-4.9, -1.96, "echo_entrance", {"gateway_bridge_11"}, 1.0};
    
    // Gateway B와 기존 검사실들 연결
    navigation_nodes_["gateway_bridge_1"] = {-1, 4.03, "gateway_bridge_1", {"gateway_a_entrance", "gateway_bridge_2"}, 1.0};
    navigation_nodes_["gateway_bridge_2"] = {-2, 4.03, "gateway_bridge_2", {"gateway_bridge_1", "gateway_bridge_3"}, 1.0};
    navigation_nodes_["gateway_bridge_3"] = {-3, 4.03, "gateway_bridge_3", {"gateway_bridge_2", "gateway_bridge_4"}, 1.0};
    navigation_nodes_["gateway_bridge_4"] = {-4, 4.03, "gateway_bridge_4", {"gateway_bridge_3", "gateway_bridge_5"}, 1.0};
    navigation_nodes_["gateway_bridge_5"] = {-5, 4.03, "gateway_bridge_5", {"gateway_bridge_4", "gateway_bridge_6"}, 1.0};
    navigation_nodes_["gateway_bridge_6"] = {-5.58, 4.03, "gateway_bridge_6", {"gateway_bridge_5", "xray_approach", "gateway_bridge_7"}, 1.0};
    navigation_nodes_["xray_approach"] = {-5.2, 4.31, "xray_approach", {"gateway_bridge_6", "xray_entrance"}, 1.0};
    navigation_nodes_["gateway_bridge_7"] = {-5.58, 3, "gateway_bridge_7", {"gateway_bridge_6", "gateway_bridge_8"}, 1.0};
    navigation_nodes_["gateway_bridge_8"] = {-5.58, 2, "gateway_bridge_8", {"gateway_bridge_7", "gateway_bridge_9"}, 1.0};
    navigation_nodes_["gateway_bridge_9"] = {-5.58, 1, "gateway_bridge_9", {"gateway_bridge_8", "gateway_bridge_10"}, 1.0};
    navigation_nodes_["gateway_bridge_10"] = {-5.58, 0, "gateway_bridge_10", {"gateway_bridge_9", "gateway_bridge_11"}, 1.0};
    navigation_nodes_["gateway_bridge_11"] = {-5.58, -1, "gateway_bridge_11", {"gateway_bridge_10", "ct_entrance", "echo_entrance"}, 1.0};
    
    RCLCPP_INFO(this->get_logger(), "Loaded %zu navigation nodes", navigation_nodes_.size());
}

double AutoPathNavigationServer::distance(const NavigationNode& a, const NavigationNode& b) const {
    double dx = b.x - a.x, dy = b.y - a.y;
    return std::sqrt(dx * dx + dy * dy);
}

double AutoPathNavigationServer::heuristic(const NavigationNode& a, const NavigationNode& b) const {
    return distance(a, b);
}

std::string AutoPathNavigationServer::findNearestWaypoint(double x, double y) const
{
    double best_distance = std::numeric_limits<double>::max();
    std::string nearest_waypoint = "lobby_station";  // 기본값
    
    for (const auto& [name, waypoint] : waypoints_) {
        double dx = x - waypoint.x;
        double dy = y - waypoint.y;
        double distance = std::sqrt(dx * dx + dy * dy);
        
        if (distance < best_distance) {
            best_distance = distance;
            nearest_waypoint = name;
        }
    }
    
    return nearest_waypoint;
}

void AutoPathNavigationServer::amclCallback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg)
{
    std::string nearest_wp = findNearestWaypoint(
        msg->pose.pose.position.x, 
        msg->pose.pose.position.y);

        start_waypoint_ = nearest_wp;
}

std::vector<std::string> AutoPathNavigationServer::a_star(const std::string& start, const std::string& end) {
    using QElem = std::pair<double, std::string>;
    std::priority_queue<QElem, std::vector<QElem>, std::greater<>> open_set;
    std::map<std::string, double> g_score, f_score;
    std::map<std::string, std::string> came_from;

    g_score[start] = 0;
    f_score[start] = heuristic(navigation_nodes_[start], navigation_nodes_[end]);
    open_set.emplace(f_score[start], start);

    while (!open_set.empty()) {
        std::string current = open_set.top().second;
        open_set.pop();

        if (current == end) break;

        const NavigationNode& current_node = navigation_nodes_[current];
        for (const std::string& neighbor : current_node.neighbors) {
            double tentative_g = g_score[current] + distance(current_node, navigation_nodes_[neighbor]) * navigation_nodes_[neighbor].cost_weight;
            if (!g_score.count(neighbor) || tentative_g < g_score[neighbor]) {
                came_from[neighbor] = current;
                g_score[neighbor] = tentative_g;
                f_score[neighbor] = tentative_g + heuristic(navigation_nodes_[neighbor], navigation_nodes_[end]);
                open_set.emplace(f_score[neighbor], neighbor);
            }
        }
    }

    if (!came_from.count(end)) return {};

    std::vector<std::string> path;
    for (std::string node = end; !node.empty(); node = came_from[node]) path.push_back(node);
    std::reverse(path.begin(), path.end());
    return path;
}

geometry_msgs::msg::PoseStamped AutoPathNavigationServer::make_pose(double x, double y, double yaw_deg) {
    geometry_msgs::msg::PoseStamped pose;
    pose.header.frame_id = "map";
    pose.header.stamp = now();
    pose.pose.position.x = x;
    pose.pose.position.y = y;

    tf2::Quaternion q;
    q.setRPY(0, 0, yaw_deg * M_PI / 180.0);
    pose.pose.orientation = tf2::toMsg(q);

    return pose;
}

std::vector<geometry_msgs::msg::PoseStamped> AutoPathNavigationServer::nodes_to_poses(const std::vector<std::string>& node_path, const std::string& dst_waypoint) {
    std::vector<geometry_msgs::msg::PoseStamped> poses;

    for (size_t i = 0; i < node_path.size(); ++i) {
        const auto& node = navigation_nodes_[node_path[i]];
        double yaw = 0.0;
        if (i + 1 < node_path.size()) {
            auto& next_node = navigation_nodes_[node_path[i + 1]];
            yaw = std::atan2(next_node.y - node.y, next_node.x - node.x) * 180.0 / M_PI;
        } else if (waypoints_.count(dst_waypoint)) {
            yaw = waypoints_[dst_waypoint].yaw;
        }
        poses.push_back(make_pose(node.x, node.y, yaw));
    }

    return poses;
}

std::string AutoPathNavigationServer::find_nearest_waypoint(double x, double y) const {
    double best_dist = std::numeric_limits<double>::max();
    std::string best_wp = "";

    for (const auto& [name, wp] : waypoints_) {
        double dist = std::hypot(x - wp.x, y - wp.y);
        if (dist < best_dist) {
            best_dist = dist;
            best_wp = name;
        }
    }
    return best_wp;
}

void AutoPathNavigationServer::navigate_to(const std::string& destination_waypoint) {
    if (!waypoints_.count(destination_waypoint)) {
        RCLCPP_ERROR(get_logger(), "Unknown waypoint '%s'", destination_waypoint.c_str());
        return;
    }

    // 출발지 고정 (실제 환경에서는 현 위치 기반 등)
    std::string start = start_waypoint_;
    // 목적지에 대응하는 navigation node 약속된 명명 규칙으로 사용 (예: waypoint이름 + "_entrance")
    std::string goal = destination_waypoint + "_entrance";
    if (!navigation_nodes_.count(goal)) {
        RCLCPP_ERROR(get_logger(), "No navigation node '%s' found", goal.c_str());
        return;
    }

    // A* 경로 탐색
    auto node_path = a_star(start, goal);
    if (node_path.empty()) {
        RCLCPP_ERROR(get_logger(), "No path found between %s and %s", start.c_str(), goal.c_str());
        return;
    }

    current_target_ = destination_waypoint;

    // 전체 경로 PoseStamped 배열로 변환
    auto poses = nodes_to_poses(node_path, destination_waypoint);

    // 액션 goal 전송
    send_through_poses_goal(poses);
}

void AutoPathNavigationServer::send_through_poses_goal(const std::vector<geometry_msgs::msg::PoseStamped>& poses) {
    if (!nav_through_poses_client_->wait_for_action_server(5s)) {
        RCLCPP_ERROR(get_logger(), "navigate_through_poses action server not available");
        return;
    }

    auto goal_msg = nav2_msgs::action::NavigateThroughPoses::Goal();
    goal_msg.poses = poses;

    auto options = rclcpp_action::Client<nav2_msgs::action::NavigateThroughPoses>::SendGoalOptions();

    options.feedback_callback = std::bind(&AutoPathNavigationServer::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
    options.result_callback = std::bind(&AutoPathNavigationServer::result_callback, this, std::placeholders::_1);

    nav_through_poses_client_->async_send_goal(goal_msg, options);

    RCLCPP_INFO(get_logger(), "Sent navigate_through_poses goal with %zu poses", poses.size());
}

void AutoPathNavigationServer::feedback_callback(
        GoalHandleNavigateThroughPoses::SharedPtr /*goal_handle*/,
        const std::shared_ptr<const nav2_msgs::action::NavigateThroughPoses::Feedback> feedback) {
        auto p = feedback->current_pose.pose.position;
        RCLCPP_INFO_THROTTLE(
            get_logger(), *get_clock(), 3000,
            "Current target pose: x=%.2f, y=%.2f", p.x, p.y);
}

void AutoPathNavigationServer::result_callback(const GoalHandleNavigateThroughPoses::WrappedResult& result) {
    if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
        start_waypoint_ = current_target_;
        RCLCPP_INFO(get_logger(), "Arrived at destination '%s', updated start point.", current_target_.c_str());
    } else if (result.code == rclcpp_action::ResultCode::ABORTED) {
        RCLCPP_ERROR(get_logger(), "Navigation aborted.");
    } else if (result.code == rclcpp_action::ResultCode::CANCELED) {
        RCLCPP_WARN(get_logger(), "Navigation canceled.");
    }
    current_target_.clear();
}

void AutoPathNavigationServer::navigationCommandCallback(const std_msgs::msg::String::SharedPtr msg)
{
    std::string waypoint_name = msg->data;

    RCLCPP_INFO(this->get_logger(), "Received navigation command: '%s'", waypoint_name.c_str());

    if (waypoints_.find(waypoint_name) != waypoints_.end()) {
        navigate_to(waypoint_name);  // 앞서 구현한 주행 시작 함수 호출
    } else {
        RCLCPP_WARN(this->get_logger(), "Unknown waypoint: '%s'", waypoint_name.c_str());
    }
}