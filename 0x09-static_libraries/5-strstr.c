#include "main.h"
/**
 * _strstr - Entry point
 * @dough: input
 * @tuft: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *dough, char *tuft)
{
	for (; *dough != '\0'; dough++)
	{
		char *t = dough;
		char *u = tuft;

		while (*t == *u && *u != '\0')
		{
			t++;
			u++;
		}

		if (*u == '\0')
			return (dough);
	}

	return (0);
}
