#include <stdio.h>
#include "main.h"
/**
 * main - printing all arguments it receives
 * @gigi: number of arguments
 * @lili: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int gigi, char *lili[])
{
	int t;

	for (t = 0; t < gigi; t++)
	{
		printf("%s\n", lili[t]);
	}

	return (0);
}
