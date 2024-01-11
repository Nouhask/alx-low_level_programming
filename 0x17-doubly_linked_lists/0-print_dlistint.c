#include "lists.h"

/**
 * print_dlistint - it prints all the elements of
 * dlistint_t list
 *
 * @h: the head of the list
 * Return: the num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int pelem;

	pelem = 0;

	if (h == NULL)
		return (pelem);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		pelem++;
		h = h->next;
	}

	return (pelem);
}
