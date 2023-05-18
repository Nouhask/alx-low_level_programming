#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *mimi;
	int uu, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	mimi = malloc(sizeof(int) * size);

	if (mimi == NULL)
		return (NULL);

	for (uu = 0; min <= max; size++)
		mimi[uu] = min++;

	return (mimi);
}
