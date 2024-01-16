#include "monty.h"

/**
 * f_push - Adds a node to the stack or queue based on bus.lifi.
 * @head: Pointer to the head of the stack or queue.
 * @counter: Line number in the Monty bytecode file.
 *
 * Description:
 * This function checks the validity of the push argument, converts it to
 * an integer, and adds it to the stack
 * or queue based on the value of bus.lifi.
 * If the argument is not a valid integer or no argument is provided, it prints
 * an error message and exits with EXIT_FAILURE.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;

		while (bus.arg[i] != '\0')
		{
			if (bus.arg[i] > '9' || bus.arg[i] < '0')
				flag = 1;
			i++;
		}

		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

