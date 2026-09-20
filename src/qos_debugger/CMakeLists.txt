cmake_minimum_required(VERSION 3.8)
project(qos_debugger)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_hw_interfaces REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(qos_debugger_pub src/qos_debugger_pub.cpp)
ament_target_dependencies(qos_debugger_pub rclcpp nav_hw_interfaces std_msgs)

add_executable(qos_debugger_sub src/qos_debugger_sub.cpp)
ament_target_dependencies(qos_debugger_sub rclcpp nav_hw_interfaces std_msgs)

install(TARGETS
  qos_debugger_pub
  qos_debugger_sub
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # 跳过版权 / cpplint 检查（未加版权声明、非 git 仓库）
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
