#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the num of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t sk = 0;

	while (h)
	{
		sk++;
		h = h->next;
	}
	return (sk);
}
