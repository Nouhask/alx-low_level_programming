#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @a1: string to append to
 * @a2: string to concatenate from
 * @i: number of bytes from a2 to concatenate to a1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *a1, char *a2, unsigned int i)
{
	char *a;
	unsigned int l = 0, mo = 0, mozo1 = 0, mozo2 = 0;

	while (a1 && a1[mozo1])
		mozo1++;
	while (a2 && a2[mozo2])
		mozo2++;

	if (i < mozo2)
		a = malloc(sizeof(char) * (mozo1 + i + 1));
	else
		a = malloc(sizeof(char) * (mozo1 + mozo2 + 1));

	if (!a)
		return (NULL);

	while (l < mozo1)
	{
		a[l] = a1[l];
		l++;
	}

	while (i < mozo2 && l < (mozo1 + i))
		a[l++] = a2[mo++];

	while (i >= mozo2 && l < (mozo1 + mozo2))
		a[l++] = a2[mo++];

	a[l] = '\0';

	return (a);
}
