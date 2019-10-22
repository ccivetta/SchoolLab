cmake_minimum_required(VERSION 3.14)
project(SchoolLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(SchoolLab main.cpp Teacher.cpp Teacher.h Student.cpp Student.h Course.cpp Course.h)