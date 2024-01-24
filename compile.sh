#!/bin/bash

# Compilation script for Monty interpreter

# Compile source files with gcc
gcc -Wall -Werror -Wextra -pedantic -std=c89 \
    monty_utils.c \
    pint.c \
    pop.c \
    swap.c \
    add.c \
    nop.c \
    sub.c \
    div.c \
    mul.c \
    mod.c \
    pchar.c \
    pstr.c \
    rotr.c \
    stack_queue_format.c \
    monty_main.c \
    -o monty

