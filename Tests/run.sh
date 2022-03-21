#!/bin/bash

task=$1

gcc -g -Wall -Wextra -Werror -pedantic test.c ../*.c -o run.out;

./run.out $task
