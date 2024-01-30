Written by Dhruv Nistala on 1/30/2024

The build process for C files includes multiple steps. Our focus will be on the compilation, linking, and running.

Compilation: After we write our .c file, we need to compile it. this means we translate it into machine-readable code.
This will translate our .c files into new files ending with ".o". These are called "object files".

Linking: We need to combine our individual object files (ending in ".o") and "link" them together to create a shared library of symbols and functions. This is done using make.

# What is make?
Make is a tool we use to automate the build process. If we had a lot of .c files, we wouldn't want to individually translate every single one into .o files, would we! Then manually linking them together would be a long process. This is why we have make. 