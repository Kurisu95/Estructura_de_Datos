cmake_minimum_required(VERSION 3.13)
project(Bank_Queue)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bank_Queue main.cpp Cashier.cpp Cashier.h Customer.cpp Customer.h)