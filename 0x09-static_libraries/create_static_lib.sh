#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc licall.a *.o
ranlib liball.a
