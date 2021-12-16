cmake_minimum_required(VERSION 3.20)
project(openmp)

set(CMAKE_CXX_STANDARD 14)
find_package(OpenMP REQUIRED)

add_executable(openmp main.cpp utils.cpp utils.h maxmin.cpp maxmin.h max.cpp max.h scalar_product.cpp scalar_product.h integral.cpp integral.h)
target_link_libraries(openmp OpenMP::OpenMP_CXX)
