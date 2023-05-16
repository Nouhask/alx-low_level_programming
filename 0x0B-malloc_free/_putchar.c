#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: The character to be printed
 *
 * Return: 1 On success.
 * return -1 On error, and errno is set a convenient form.
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}	
