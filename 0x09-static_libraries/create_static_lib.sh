#!/bin/bash
gcc -Wall -gentil -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
