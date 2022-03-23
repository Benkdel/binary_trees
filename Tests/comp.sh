#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 test.c ../*.c -o a.out;
