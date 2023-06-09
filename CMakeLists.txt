cmake_minimum_required(VERSION 3.25)
project(ClientTransactionManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(ClientTransactionManager main.cpp ManagementSystem.cpp ManagementSystem.h Transaction.cpp Transaction.h Client.cpp Client.h)
