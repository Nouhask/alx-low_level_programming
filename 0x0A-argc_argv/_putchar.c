#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @m: The character to print
 *
 * Return: 1 On success .
 * return -1 on error and errno is set appropriately.
 */
int _putchar(char m)
{
return (write(1, &m, 1));
}
