#include "auto_path_navigation_server/auto_path_navigation_server.hpp"
#include <rclcpp/rclcpp.hpp>

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto navigation_server = std::make_shared<AutoPathNavigationServer>();

    // 예시: 로비에서 대장암 센터로 이동
    //navigation_server->navigate_to("colon_cancer");

    rclcpp::spin(navigation_server);
    rclcpp::shutdown();
    return 0;
}
