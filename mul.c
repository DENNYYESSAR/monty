#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 *
 * Return: No return
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int num_nodes, result;

	temp = *head;
	for (num_nodes = 0; temp != NULL; num_nodes++)
		temp = temp->next;

	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	result = temp->next->n * temp->n;
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}
