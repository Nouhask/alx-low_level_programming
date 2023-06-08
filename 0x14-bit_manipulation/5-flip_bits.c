#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int alca, rozza = 0;
	unsigned long int grmilo;
	unsigned long int xol = n ^ m;

	for (alca = 63; alca >= 0; alca--)
	{
		grmilo = xol >> alca;
		if (grmilo & 1)
			rozza++;
	}

	return (rozza);
}
