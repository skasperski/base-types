cmake_minimum_required(VERSION 3.1)
project(base-types VERSION 1.0)

find_package(PkgConfig REQUIRED)
find_package(Eigen3 REQUIRED)

pkg_check_modules(base-logging REQUIRED IMPORTED_TARGET base-logging)

add_subdirectory(base)

