#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character a to stdout
 * @a: The character to be printed
 *
 * Return: On success 1.
 * return -1 on error and errno is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
