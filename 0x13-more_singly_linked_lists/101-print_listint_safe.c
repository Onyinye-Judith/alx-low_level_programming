#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;
		current = current->next;

		/* Check for a loop in the list */
		if (current == head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (node_count);
}
