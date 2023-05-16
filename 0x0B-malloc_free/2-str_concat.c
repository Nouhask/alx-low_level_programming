#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add them together for size
 * @a1: input one to concat
 * @a2: input two to concat
 * Return: concat of a1 and a2
 */
char *str_concat(char *a1, char *a2)
{
	char *conct;
	int m, q;

	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";

	m = q = 0;
	while (a1[m] != '\0')
		m++;
	while (a2[q] != '\0')
		q++;
	conct = malloc(sizeof(char) * (m + q + 1));

	if (conct == NULL)
		return (NULL);
	m = q = 0;
	while (a1[m] != '\0')
	{
		conct[m] = a1[m];
		m++;
	}

	while (a2[q] != '\0')
	{
		conct[m] = a2[q];
		m++, q++;
	}
	conct[m] = '\0';
	return (conct);
}	
