cmake_minimum_required(VERSION 3.8)
project(my_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)

#create the executable
add_executable(lidar_data_subscriber_executable src/lidar_data_subscriber.cpp)
ament_target_dependencies(lidar_data_subscriber_executable rclcpp sensor_msgs)

#Where to install the executable
install(TARGETS
  lidar_data_subscriber_executable
  DESTINATION lib/${PROJECT_NAME} 
)

ament_package()
