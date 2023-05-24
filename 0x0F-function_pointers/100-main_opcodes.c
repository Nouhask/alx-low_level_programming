#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv)
{
	int bytes, nu;
	char *nuh;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	nuh = (char *)main;

	for (nu = 0; nu < bytes; nu++)
	{
		if (nu == bytes - 1)
		{
			printf("%02hhx\n", nuh[nu]);
			break;
		}
		printf("%02hhx ", nuh[nu]);
	}
	return (0);
}
