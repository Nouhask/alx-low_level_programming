#include "main.h"
#include <unistd.h>
/**
 * _putchar - is writing the character c to stdout
 * @c: The character to be print
 *
 * Return: On success 1
 * On error -1 is returned and errno is set right
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
