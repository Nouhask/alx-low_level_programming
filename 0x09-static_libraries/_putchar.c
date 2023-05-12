#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: The character to be print
 *
 * Return: 1 On success.
 * On error, is returned -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
