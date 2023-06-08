#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int shishi, adad = 0;
	unsigned long int current;

	for (shishi = 63; shishi >= 0; shishi--)
	{
		current = n >> shishi;

		if (current & 1)
		{
			_putchar('1');
			adad++;
		}
		else if (adad)
			_putchar('0');
	}
	if (!adad)
		_putchar('0');
}
