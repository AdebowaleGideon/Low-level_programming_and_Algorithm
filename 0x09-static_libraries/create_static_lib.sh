# script creates a static library called 'liball.c' from all '.c' files in the current directory
gcc -c *.c
ar rc liball.a *.o

