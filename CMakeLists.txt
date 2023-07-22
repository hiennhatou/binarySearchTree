cmake_minimum_required(VERSION 3.25)
project(binarySearchTree)

set(CMAKE_CXX_STANDARD 17)

file(GLOB myUtils utils/*.cpp utils/*.h)
file(GLOB myFeatures features/*.cpp features/*.h)

add_executable(binaryTree main.cpp ${myUtils} ${myFeatures})
