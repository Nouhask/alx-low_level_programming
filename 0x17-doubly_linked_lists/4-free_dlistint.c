#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((free_list = head) != NULL)
	{
		head = head->next;
		free(free_list);
	}
}
