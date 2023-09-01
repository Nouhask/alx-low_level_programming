#include "main.h"
/**
 * get_endianness - that checks the endianness
 * Return: 0 for big endianness, 1 for little endianness
 */
int get_endianness(void)
{
	unsigned int ghk = 1;
	char *slthi = (char *) &ghk;

	return (*slthi);
}
