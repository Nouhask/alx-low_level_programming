#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings that followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings that passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed
 *        If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *nastrd;
	unsigned int far;

	va_start(strings, n);

	for (far = 0; far < n; far++)
	{
	   nastrd = va_arg(strings, char *);

		if (nastrd == NULL)
			printf("(nil)");
		else
			printf("%s", nastrd);

		if (far != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
