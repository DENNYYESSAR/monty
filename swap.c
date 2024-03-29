#include "monty.h"

/**
 * f_pint - Prints the top element of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number in the Monty bytecode file.
 *
 * Description:
 *	This function prints the top element of the stack. If the stack is empty,
 *	it outputs an error message with the line number, closes the Monty file,
 *	frees allocated memory, and exits with EXIT_FAILURE.
 */
void f_swap(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
