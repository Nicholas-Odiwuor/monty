#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: current line number in the Monty bytecode file
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    (void)line_number;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

