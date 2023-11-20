include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the pointer to the first node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;
	return (*head);
}
