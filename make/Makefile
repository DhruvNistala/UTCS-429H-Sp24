CXX=gcc  # use a variable to store the compiler

# format of a make rule:
# target: dependencies
# 	command
#   command
# note that make uses tabs not spaces. You will get an error if you use spaces

# the default target is the first one in the file
# to build this target, we can just run `make` with no arguments
# alternatively, we can run `make all`

# What does prerequisites mean?
#
# Prerequisites are the files that the target depends on. If any of the
# prerequisites have been modified more recently than the target, the
# target is considered out-of-date and must be rebuilt.

# the workflow of this makefile follows the compile-link model
# the main target takes a compiled object file and links it into an executable
# this main target depends on the main.o target, which compiles the main.c file
# into the main.o object file. So if you call `make main` or simply `make`, make
# will first realize that main.o has not been compiled yet and automatically
# run the main.o target. 

# the main target depends on the object file main.o. If main.o is newer
# than main, we need to rebuild the main executable. Running this target
# links the main.o object file into an executable called main
main: main.o
	$(CXX) -o main main.o

# the main.o target depends on the source file main.c
# if main.c is newer than main.o, we need to rebuild main.o
# running this target compiles the main.c file into an object file
main.o: main.c
	$(CXX) -c main.c -o main.o

# we can also define a target to clean up the directory
# this is useful for removing the executable and any object files
# this target removes the main executable and all object files
clean:
	rm -f *.o main 

# if you're interested in learning more about make, you can check out
# https://makefiletutorial.com/

