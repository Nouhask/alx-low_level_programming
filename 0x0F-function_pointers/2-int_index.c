#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of the elements in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int nu;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (nu = 0; nu < size; nu++)
	{
		if (cmp(array[nu]))
			return (nu);
	}
	return (-1);
}
