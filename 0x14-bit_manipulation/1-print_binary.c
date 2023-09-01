#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: is the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int pmcinq, ldr = 0;
	unsigned long int current;

	for (pmcinq = 63; pmcinq >= 0; pmcinq--)
	{
		current = n >> pmcinq;

		if (current & 1)
		{
			_putchar('1');
			ldr++;
		}
		else if (ldr)
			_putchar('0');
	}
	if (!ldr)
		_putchar('0');
}
