#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: a head of the list.
 * @n: the value of the element.
 * Return: the address of a new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nueva;
	dlistint_t *c;

	nueva = malloc(sizeof(dlistint_t));
	if (nueva == NULL)
		return (NULL);

	nueva->n = n;
	nueva->prev = NULL;
	c = *head;

	if (c != NULL)
	{
		while (c->prev != NULL)
			c = c->prev;
	}

	nueva->next = c;

	if (c != NULL)
		c->prev = nueva;

	*head = nueva;

	return (nueva);
}
