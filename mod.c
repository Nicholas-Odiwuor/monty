#include "monty.h"

/**
 * mod - Compute the rest of the division of the second top element by the top element
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Current line number in the Monty bytecode file
 */
void mod(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n %= (*stack)->n;
    pop(stack, line_number);
}

