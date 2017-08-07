cmake_minimum_required (VERSION 2.6)

project(lma)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

find_package(Boost 1.51 REQUIRED chrono system)
find_package(Eigen REQUIRED)

install (DIRECTORY include/ DESTINATION include)
