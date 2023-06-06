#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *qtrz;
listint_t *tempù = *head;

qtrz = malloc(sizeof(listint_t));
if (!qtrz || !head)
return (NULL);

qtrz->n = n;
qtrz->next = NULL;

if (idx == 0)
{
qtrz->next = *head;
*head = qtrz;
return (qtrz);
}

for (j = 0; tempù && j < idx; j++)
{
if (j == idx - 1)
{
qtrz->next = tempù->next;
tempù->next = qtrz;
return (qtrz);
}
else
tempù = tempù->next;
}

return (NULL);
}
