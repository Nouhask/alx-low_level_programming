#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mn;
	unsigned int luna = 0;

	while (str[luna])
		luna++;

	mn = malloc(sizeof(list_t));
	if (!mn)
		return (NULL);

	mn->str = strdup(str);
	mn->luna = luna;
	mn->next = (*head);
	(*head) = mn;

	return (*head);
}
