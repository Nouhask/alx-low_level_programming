#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @a: memory area to be filled
 * @z: char to copy
 * @e: number of times to copy z
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *a, char z, unsigned int e)
{
	unsigned int q;

	for (q = 0; q < e; q++)
	{
		a[q] = z;
	}

	return (a);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mimi;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mimi = malloc(size * nmemb);

	if (mimi == NULL)
		return (NULL);

	_memset(mimi, 0, nmemb * size);

	return (mimi);
}
