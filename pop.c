#include "monty.h"

/**
 * pop - Remove the top element of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (stack == NULL || *stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = temp->next;
    free(temp);
}

