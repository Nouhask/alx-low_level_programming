#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: elements to print
 * @action: pointer to print in regular or hexadecimal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int nu;

	if (array == NULL || action == NULL)
		return;

	for (nu = 0; nu < size; nu++)
	{
		action(array[nu]);
	}
}
