#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @tack: Stack head
 * @counter: Line_number
 * Return: No return
*/
void f_add(stack_t **tack, unsigned int counter)
{
	stack_t *t;
	int len = 0, aux;

	t = *tack;
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
		free_stack(*tack);
		exit(EXIT_FAILURE);
	}
	t = *tack;
	aux = t->n + t->next->n;
	t->next->n = aux;
	*tack = t->next;
	free(t);
}
