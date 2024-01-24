cmake_minimum_required(VERSION 3.27)
project(cs429H_c_snippets C)

set(CMAKE_C_STANDARD 17)

add_executable(helloworld helloworld.c)
add_executable(sizeof sizeof.c)
add_executable(flow-control flow_control.c)
