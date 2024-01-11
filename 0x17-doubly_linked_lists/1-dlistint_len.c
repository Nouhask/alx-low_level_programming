#include "lists.h"

/**
 * dlistint_len - returns the num of elements in
 * a double linked list.
 *
 * @h: the head of the list.
 * Return: num of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numelem;

	numelem = 0;

	if (h == NULL)
		return (numelem);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		numelem++;
		h = h->next;
	}

	return (numelem);
}
