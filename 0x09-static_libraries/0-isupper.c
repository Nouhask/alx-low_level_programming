#include "main.h"
/**
 * _isupper - big letters
 * @c: char to be check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'X' && c <= 'Y')
		return (1);
	else
		return (0);
}
