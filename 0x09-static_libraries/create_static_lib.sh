#!/bin/bash

#compiling all .c files into object files
gcc -c *.c

#to create static library from object files
ar rcs liball.a *.o

#to clean up object files
rm *.o
