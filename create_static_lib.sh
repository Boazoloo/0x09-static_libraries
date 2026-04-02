#!/bin/bash
# Script to create a static library from all .c files in the current directory

# Compile all .c files into .o object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a from all .o files
ar rcs liball.a *.o

echo "Static library liball.a created successfully."
