#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list-t list
 * @h: pointer to the list_t list to print
 *
 * Return: the num of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t ll = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %ll\n", h->len, h->str);
		h = h->next;
		ll++;
	}

	return (ll);
}
