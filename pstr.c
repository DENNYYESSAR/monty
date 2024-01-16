#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top
 * of the stack followed by a new line.
 * @head: Stack head
 * @counter: Line number
 *
 * Return: No return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
