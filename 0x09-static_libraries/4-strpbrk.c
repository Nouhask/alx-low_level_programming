#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @confirme: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *confirme)
{
	int p;

	while (*s)
	{
		for (p = 0; confirme[p]; p++)
		{
		if (*s == confirme[p])
		return (s);
		}
	s++;
	}
return ('\0');
}
