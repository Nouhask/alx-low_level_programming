#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @zizo: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int zizo)
{
	void *mimi;

	mimi = malloc(zizo);

	if (mimi == NULL)
		exit(98);

	return (mimi);
}
