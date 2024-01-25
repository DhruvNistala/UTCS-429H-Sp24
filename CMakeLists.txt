cmake_minimum_required(VERSION 3.27)
project(cs429H_c_snippets C)

set(CMAKE_C_STANDARD 17)

add_executable(helloworld helloworld.c)
add_executable(sizeof sizeof.c)
add_executable(flow-control flow_control.c)
add_executable(passing_args_to_functions passing_args_to_functions.c)
add_executable(pointers pointers.c)
add_executable(structs structs.c)
add_executable(arrays_and_strings arrays_and_strings.c)
