CXX=gcc  # specify compiler to use

SRC=main.c # name of source file to create executable from
EXE=main # main is the name of the executable to be created

all: $(SRC) # default target. If you just run make it assumes make all
	$(CXX) -o $(EXE) $(SRC) 

clean: # removes executable; -f says no prompt for confirmation
	rm -f $(EXE) 