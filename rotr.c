#include "monty.h"

/**
 * rotr - Rotate the stack to the bottom
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;
    stack_t *last = *stack;

    (void)line_number;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return;

    while (last->next != NULL)
        last = last->next;

    temp = last->prev;
    temp->next = NULL;
    last->prev = NULL;
    last->next = *stack;
    (*stack)->prev = last;
    *stack = last;
}

