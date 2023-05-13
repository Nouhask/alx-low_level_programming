#include "main.h"
/**
 * _memset - fill a block of memory with a set value
 * @s: the beginning of the name of the memory to be filled
 * @b: required value
 * @a: num of bytes to be changed
 *
 * Return: changed array with new value for a bytes
 */
char *_memset(char *s, char b, unsigned int a)
{
	int i = 0;

	for (; a > 0; i++)
	{
		s[i] = b;
		a--;
	}
	return (s);
}
