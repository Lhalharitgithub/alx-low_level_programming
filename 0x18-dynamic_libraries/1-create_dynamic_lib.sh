#!/bin/bash
gcc -Wall -Wextra -Werro -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_Library_Path=.:$LD_Library_Path
