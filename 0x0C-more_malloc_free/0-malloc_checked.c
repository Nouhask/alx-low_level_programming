#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mimi;

	mimi = malloc(b);

	if (mimi == NULL)
		exit(98);

	return (mimi);
}
