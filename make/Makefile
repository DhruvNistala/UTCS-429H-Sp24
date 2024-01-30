CXX=gcc  # use a variable to store the compiler

# format of a make rule:
# target: prerequisites
# 	recipe (just a list of commands to run)	
#   ...
# note that make uses tabs not spaces. You will get an error if you use spaces

# the default target is the first one in the file
# to build this target, we can just run `make` with no arguments
# alternatively, we can run `make main`

# Linking step: linker takes main.o and turns it into an executable main
# since the main target depends on main.o, we put it first so that running
# `make main` will run the main.o target first.
main: main.o
	$(CXX) -o main main.o

# compile step: compiler takes main.c and turns it into an object file
# main.o
main.o: main.c
	$(CXX) -c main.c -o main.o

# this target is a "phony" target, meaning it doesn't actually create a file
# the recipe for this target just removes all the object files and the main executable
clean:
	rm -f *.o main 

# if you're interested in learning more about make, you can check out
# https://www.gnu.org/software/make/manual/make.html
