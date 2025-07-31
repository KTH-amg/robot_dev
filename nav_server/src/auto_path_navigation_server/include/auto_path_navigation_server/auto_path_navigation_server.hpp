#pragma once

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav2_msgs/action/navigate_through_poses.hpp>
#include <std_msgs/msg/string.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <map>
#include <vector>
#include <string>

struct NavigationNode {
    double x, y;
    std::string node_id;
    std::vector<std::string> neighbors;
    double cost_weight;
};

struct WaypointInfo {
    std::string name;
    double x, y, yaw;
    std::string description;
};

struct PathPoint {
    double x, y, yaw;
    int index;
    std::string point_name;
};

class AutoPathNavigationServer : public rclcpp::Node {
public:
    AutoPathNavigationServer();

    // 목적지 waypoint 이름으로 주행 명령
    void navigate_to(const std::string& destination_waypoint);

private:
    using NavigateThroughPoses = nav2_msgs::action::NavigateThroughPoses;
    using GoalHandleNavigateThroughPoses = rclcpp_action::ClientGoalHandle<NavigateThroughPoses>;

    // Nav2 다중경로 액션 클라이언트
    rclcpp_action::Client<NavigateThroughPoses>::SharedPtr nav_through_poses_client_;

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr navigation_command_publisher_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr nav_command_subscriber_;
    rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr amcl_subscribers_;

    // 그래프 및 웨이포인트 저장
    std::map<std::string, NavigationNode> navigation_nodes_;
    std::map<std::string, WaypointInfo> waypoints_;

    // 현재 출발지 및 목표지명 관리 (stick)
    std::string start_waypoint_;
    std::string current_target_;

    // 경로계획 - A*
    std::vector<std::string> a_star(const std::string& start, const std::string& end);

    // 노드를 PoseStamped 배열로 변경
    std::vector<geometry_msgs::msg::PoseStamped> nodes_to_poses(const std::vector<std::string>& node_path,
                                                                const std::string& dst_waypoint);

    geometry_msgs::msg::PoseStamped make_pose(double x, double y, double yaw_deg);

    // 액션 goal 전송
    void send_through_poses_goal(const std::vector<geometry_msgs::msg::PoseStamped>& poses);

    // 액션 콜백
    void feedback_callback(GoalHandleNavigateThroughPoses::SharedPtr,
                           const std::shared_ptr<const NavigateThroughPoses::Feedback>);
    void result_callback(const GoalHandleNavigateThroughPoses::WrappedResult&);

    // 거리 및 휴리스틱 계산
    double distance(const NavigationNode& a, const NavigationNode& b) const;
    double heuristic(const NavigationNode& a, const NavigationNode& b) const;

    // 출발지 결정용 좌표→웨이포인트 변환
    std::string find_nearest_waypoint(double x, double y) const;

    // 데이터 초기화
    void init_nodes();
    void init_waypoints();
    void navigationCommandCallback(const std_msgs::msg::String::SharedPtr msg);
    std::string findNearestWaypoint(double x, double y) const;
    void amclCallback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg);
};
