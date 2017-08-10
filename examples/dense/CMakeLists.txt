cmake_minimum_required (VERSION 2.6)

project(dense)

find_package(Eigen REQUIRED)

include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} ${EIGEN_LIBRARIES})
