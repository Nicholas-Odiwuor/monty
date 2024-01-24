#include "monty.h"

/**
 * main - Entry point for the Monty bytecode interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    unsigned int line_number = 1;
    stack_t *stack = NULL;
    int format = STACK; /* Default format is stack (LIFO) */

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        execute_opcode(line, &stack, line_number, format);
        line_number++;
    }

    free_stack(&stack);
    free(line);
    fclose(file);
    exit(EXIT_SUCCESS);
}

