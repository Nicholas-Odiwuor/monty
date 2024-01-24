#include "monty.h"

/**
 * pstr - Print the string starting at the top of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    (void)line_number;

    while (current != NULL && current->n != 0 && (current->n > 0 && current->n <= 127))
    {
        printf("%c", current->n);
        current = current->next;
    }
    printf("\n");
}

