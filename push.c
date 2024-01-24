#include "monty.h"

/**
 * push - pushes an element onto the stack
 * @stack: double pointer to the beginning of the stack
 * @value: value to be pushed onto the stack
 */
void push(stack_t **stack, int value)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        dprintf(2, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}

