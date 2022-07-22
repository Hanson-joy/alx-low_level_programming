#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -C *.c
ar rc biball.a *.o
