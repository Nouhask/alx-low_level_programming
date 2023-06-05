#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @jj: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t koo = 0;

 while (jj)
 {
 printf("%d\n", jj->g);
 koo++;
 jj = jj->next;
 }

 return (koo);
}
