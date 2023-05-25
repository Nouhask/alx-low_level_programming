#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of all the types of arguments that passed to the function
 */
void print_all(const char * const format, ...)
{
	int d = 0;
	char *hjb, *bti = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[d])
		{
			switch (format[d])
			{
				case 'c':
					printf("%s%c", bti, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", bti, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", bti, va_arg(list, double));
					break;
				case 's':
					hjb = va_arg(list, char *);
					if (!hjb)
						hjb = "(nil)";
					printf("%s%s", bti, hjb);
					break;
				default:
					d++;
					continue;
			}
			bti = ", ";
			d++;
		}
	}

	printf("\n");
	va_end(list);
}
