cmake_minimum_required (VERSION 2.6)

project(lma)

add_definitions(-std=gnu++11)

find_package(Boost 1.51 REQUIRED chrono system)
find_package(Eigen REQUIRED)

include_directories(include)

add_subdirectory(examples/rosenbrock)

install (DIRECTORY include/ DESTINATION include)
