cmake_minimum_required(VERSION 3.1)
project(base VERSION 1.0)

find_package(Rock REQUIRED)

rock_init()
rock_export_includedir(${PROJECT_SOURCE_DIR}/src base/geometry)
#include_directories(BEFORE ${PROJECT_SOURCE_DIR})
rock_standard_layout()

