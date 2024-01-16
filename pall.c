#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Unused variable.
 *
 * Description:
 * This function prints the elements of the stack. If the stack is empty,
 * it returns without printing anything.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;

	current = *head;
	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
