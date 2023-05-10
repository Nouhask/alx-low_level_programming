#include "main.h"
/**
 * factorial - returns the factorial of a Nº
 * @n: the number to return the factorial
 *
 * Return: the n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
