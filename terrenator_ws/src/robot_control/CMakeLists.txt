cmake_minimum_required(VERSION 3.8)
project(robot_control)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(BOOST_ROOT "/usr")
set(Boost_INCLUDE_DIRS "/usr/include/boost")
set(Boost_LIBRARIES "/usr/lib/x86_64-linux-gnu")

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(interfaces REQUIRED)
find_package(Boost REQUIRED COMPONENTS)   # Is NOT an ament package

# The only directories that need to be manually included are 
# local directories and dependencies that are not ament packages  
include_directories(/usr/include)
include_directories(include ${Boost_INCLUDE_DIRS})
# target_include_directories(robot_uart_controller PUBLIC include ${Boost_INCLUDE_DIRS})  #Incluye los directorios solo para este target
# target_include_directories(robot_uart_controller PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)

# add the executable and name it 'robot_uart_controller' so you can run your node using ros2 run:
add_executable(robot_uart_controller src/robot_uart_controller.cpp)

target_compile_features(robot_uart_controller PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
# LINK PACKAGES TO THE BUILD TARGET
ament_target_dependencies(robot_uart_controller   # EJECUTABLE
  rclcpp
  std_msgs
  sensor_msgs
  interfaces)
target_link_libraries(robot_uart_controller ${Boost_LIBRARIES})  # PARA PAQUETES QUE NO SON AMENT

# add the install(TARGETS...) section so ros2 run can find your executable:
install(TARGETS robot_uart_controller         # NOMBRE DE LOS NODOS SEPARADOS POR ESPACIOS
        DESTINATION lib/robot_control)

ament_package()
