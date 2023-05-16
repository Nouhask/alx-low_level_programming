#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char f
 * @size: size of array
 * @f: char to assign
 * Description: create array of size and assign char f
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char f)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = f;
	return (str);
}
