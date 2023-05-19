#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l = 0, mo = 0, mozo1 = 0, mozo2 = 0;

	while (s1 && s1[mozo1])
		mozo1++;
	while (s2 && s2[mozo2])
		mozo2++;

	if (n < mozo2)
		s = malloc(sizeof(char) * (mozo1 + n + 1));
	else
		s = malloc(sizeof(char) * (mozo1 + mozo2 + 1));

	if (!s)
		return (NULL);

	while (l < mozo1)
	{
		s[l] = s1[l];
		l++;
	}

	while (n < mozo2 && l < (mozo1 + n))
		s[l++] = s2[mo++];

	while (n >= mozo2 && l < (mozo1 + mozo2))
		s[l++] = s2[mo++];

	s[l] = '\0';

	return (s);
}