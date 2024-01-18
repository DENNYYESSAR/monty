#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Stack head
 * @counter: Line_number
 * Return: No return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *t;
	int len = 0, aux;

	t = *head;
	while (t)
	{
		t = t->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	aux = t->n + t->next->n;
	t->next->n = aux;
	*head = t->next;
	free(t);
}
