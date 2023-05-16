#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *l;
	int n, k = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	l = malloc(sizeof(char) * (n + 1));

	if (l == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		l[k] = str[k];

	return (l);
}
