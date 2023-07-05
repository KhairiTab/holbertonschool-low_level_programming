#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rcs libmy.*.o
ranlib liball.a
