#include "main.h"
/**
 * get_endianness - that checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int gh = 1;
	char *slth = (char *) &gh;

	return (*slth);
}
