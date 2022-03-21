#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic test.c ../*.c -o a.out;

valgrind --leak-check=full --leak-check=yes -s --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./a.out
