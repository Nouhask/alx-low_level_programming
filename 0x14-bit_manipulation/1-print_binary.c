#include "main.h"

/**
 * print_binary - prints the binary that equivalent  a decimal num
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int o, count = 0;
	unsigned long int current;

	for (o = 63; o >= 0; o--)
	{
		current = n >> o;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
