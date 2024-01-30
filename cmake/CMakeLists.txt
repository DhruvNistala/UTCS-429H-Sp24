# all CMakeLists.txt files must start with this line
# setting the minimum version required for CMake
cmake_minimum_required(VERSION 3.16)

# setting the project name and version
project(cmake-tutorial VERSION 0.1.0 LANGUAGES C)

# add_executable is a function that creates an executable target
# the first argument is the name of the target
# the rest of the arguments are the source files needed to build the target

# these two lines create two separate executable targets: assembler and simulator
# each target is built from a single source file, assembler.c and simulator.c respectively
add_executable(assembler assembler.c)
add_executable(simulator simulator.c)
