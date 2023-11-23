#include "main.h"

/**
 * flip_bits - counts the num of bits to be changed
 * to get from one num to other
 * @n: the first num
 * @m: the second num
 *
 * Return: the num of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}

	return (count);
}
