#include <stdio.h>
#include "main.h"
/**
 * main - prints the program name
 * @argc: number of arguments
 * @gigi: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *gigi[])
{
        printf("%s\n", *gigi);

        return (0);
}