#!/bin/bash
gcc -create_static_lib.sh -c *.c
ar -rc liball.a *.o
ranlib liball.a
