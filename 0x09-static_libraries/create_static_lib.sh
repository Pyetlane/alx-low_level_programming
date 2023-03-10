#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c liball.a *.c
ar -rc liball.a *.o
