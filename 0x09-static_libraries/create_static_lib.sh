#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -arc liball.a *.o
ranlib liball.a
