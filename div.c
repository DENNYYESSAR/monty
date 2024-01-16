#include "monty.h"

/**
 * f_div - Divides the second top element by the top element of the stack.
 * @head: Stack head
 * @counter: Line number
 *
 * Return: No return
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int num_nodes;

	temp = *head;
	for (num_nodes = 0; temp != NULL; num_nodes++)
		temp = temp->next;

	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}
