#include "main.h"
/**
 * _strncat - contacts two strings
 * using at most n bytes from src
 * @start: input value
 * @src: input value
 * @n: input value
 *
 * Return: start
 */
char *_strncat(char *start, char *src, int n)
{
	int m;
	int s;

	m = 0;
	while (start[m] != '\0')
	{
		m++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
	start[m] = src[s];
	m++;
	s++;
	}
	start[m] = '\0';
	return (start);
}
