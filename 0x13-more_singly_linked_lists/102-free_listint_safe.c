#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the pointer to the first node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t node_count = 0;

	while (current != NULL)
	{
		/* Check for a loop in the list */
		if (current->next >= current)
		{
			*h = NULL;
			return (node_count);
		}

		/* Move to the next node and free the current node */
		node_count++;
		current = current->next;
		free(*h);
		*h = current;
	}

	/* Set the head to NULL after freeing the list */
	*h = NULL;

	return (node_count);
}
