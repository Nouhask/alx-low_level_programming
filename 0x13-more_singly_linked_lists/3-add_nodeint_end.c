#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *nno;
 listint_t *nnf = *head;

 nno = malloc(sizeof(listint_t));
 if (!noo)
 return (NULL);

 nno->n = n;
 nno->next = NULL;

 if (*head == NULL)
 {
 *head = nno;
 return (nno);
 }

 while (nnf->next)
 nnf = nnf->next;

 nnf->next = nno;

 return (nno);
}
