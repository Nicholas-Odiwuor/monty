#include "monty.h"

/**
 * stack - Set the format of the data to a stack (LIFO)
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void stack(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    /* Do nothing, already in stack mode (LIFO) */
}

/**
 * queue - Set the format of the data to a queue (FIFO)
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void queue(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    /* Do nothing, queue mode (FIFO) not implemented in this project */
}

