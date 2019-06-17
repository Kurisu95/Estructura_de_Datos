cmake_minimum_required(VERSION 3.13)
project(ListGraph)

set(CMAKE_CXX_STANDARD 14)

add_executable(ListGraph main.cpp Vertex.cpp Vertex.h Edge.cpp Edge.h Graph.cpp Graph.h)