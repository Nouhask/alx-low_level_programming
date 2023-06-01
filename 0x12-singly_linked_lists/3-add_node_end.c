#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nm;
	list_t *nkhs = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nm = malloc(sizeof(list_t));
	if (!nm)
		return (NULL);

	nm->str = strdup(str);
	nm->len = len;
	nm->next = NULL;

	if (*head == NULL)
	{
		*head = nm;
		return (nm);
	}

	while (nkhs->next)
		nkhs = nkhs->next;

	nkhs->next = nm;

	return (nm);
}
