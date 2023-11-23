#include "main.h"

/**
 * get_endianness - checks if a machine is big or small endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *q = (char *) &s;

	return (*q);
}
