#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char a to stdout
 * @a: The character to be printed
 *
 * Return 1 On success
 * On error, return -1, and errno is set appropriately
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
