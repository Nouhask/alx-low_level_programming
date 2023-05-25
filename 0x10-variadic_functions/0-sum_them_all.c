#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The num of paramters passed to the function
 * @...: A variable num of paramters to calculate the sum
 *
 * Return: If n == 0 - 0
 *     Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ku;
	unsigned int l, sum = 0;

	va_start(ku, n);

	for (i = 0; l < n; l++)
		sum += va_arg(ku, int);

	va_end(ku);

	return (sum);
}
