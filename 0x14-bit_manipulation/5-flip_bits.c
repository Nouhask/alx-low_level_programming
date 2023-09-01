#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int alcaa, rozza = 0;
	unsigned long int grmilo;
	unsigned long int cna = n ^ m;

	for (alcaa = 63; alcaa >= 0; alcaa--)
	{
		grmilo = cna >> alcaa;
		if (grmilo & 1)
			rozza++;
	}

	return (rozza);
}
