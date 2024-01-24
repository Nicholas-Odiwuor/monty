#include "monty.h"

/**
 * pchar - Print the char at the top of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void pchar(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || *stack == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n < 0 || (*stack)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (*stack)->n);
}

