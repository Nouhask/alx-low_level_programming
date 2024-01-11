#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c;
	dlistint_t *nueva;

	nueva = malloc(sizeof(dlistint_t));
	if (nueva == NULL)
		return (NULL);

	nueva->n = n;
	nueva->next = NULL;

	c = *head;

	if (c != NULL)
	{
		while (c->next != NULL)
			c = c->next;
		c->next = nueva;
	}
	else
	{
		*head = nueva;
	}

	nueva->prev = c;

	return (nueva);
}
