cmake_minimum_required(VERSION 3.8)
project(auto_path_navigation_server)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Include directories
include_directories(include)

# Create executable
add_executable(auto_path_navigation_server
  src/main.cpp
  src/auto_path_navigation_server.cpp
)

# Include directories for the target
target_include_directories(auto_path_navigation_server PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

# Set C++ standard
target_compile_features(auto_path_navigation_server PUBLIC c_std_99 cxx_std_17)

# Link dependencies
ament_target_dependencies(
  auto_path_navigation_server
  "rclcpp"
  "rclcpp_action"
  "geometry_msgs"
  "std_msgs"
  "nav2_msgs"
  "tf2"
  "tf2_geometry_msgs"
)

# Install executable
install(TARGETS auto_path_navigation_server
  DESTINATION lib/${PROJECT_NAME})

# Install header files
install(DIRECTORY include/
  DESTINATION include/
  FILES_MATCHING PATTERN "*.hpp")

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
