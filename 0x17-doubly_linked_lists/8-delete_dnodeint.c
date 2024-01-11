#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list.
 *
 * @head: the head of the list.
 * @index: the index of the new node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	dlistint_t *indx;
	unsigned int x;

	node = *head;

	if (node != NULL)
		while (node->prev != NULL)
			node = node->prev;

	x = 0;

	while (node != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				indx->next = node->next;

				if (node->next != NULL)
					node->next->prev = indx;
			}

			free(node);
			return (1);
		}
		indx = node;
		node = node->next;
		x++;
	}

	return (-1);
}
