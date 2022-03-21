#!/bin/bash

task=$1

gcc -g -Wall -Wextra -Werror -pedantic test.c ../*.c -o a.out;

./a.out $task
