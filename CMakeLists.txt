cmake_minimum_required(VERSION 3.0)

find_package(Rock REQUIRED)
find_package(Boost REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(SISL)

rock_init(base 1.0)

rock_standard_layout()

