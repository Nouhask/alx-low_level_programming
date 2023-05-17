#include <stdio.h>
#include "main.h"
/**
 * main - print a number of arguments passed to the program
 * @gigi: number of arguments
 * @lili: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int gigi, char *lili[])
{
(void) lili; /*Ignore lili*/
	printf("%d\n", gigi - 1);

	return (0);
}
