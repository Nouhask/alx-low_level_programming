#include "main.h"
/**
 * binary_to_uint - converts the binary number to unsigned int
 * @b: string containing the binary num
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int zgmr;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (zgmr = 0; b[zgmr]; zgmr++)
	{
		if (b[zgmr] < '0' || b[zgmr] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[zgmr] - '0');
	}

	return (dec_val);
}
