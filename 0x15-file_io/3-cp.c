#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *fl);
void close_file(int cf);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @fl: the name of the file buffer that storing chars for
 *
 * Return: a pointer to the newly-allocated buffer
 */
char *create_buffer(char *fl)
{
	char *bu;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fl);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - close the file descriptors
 * @cf: file descriptor to close
 */
void close_file(int cf)
{
	int x;

	x = close(cf);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close cf %d\n", cf);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @arg: the number of arguments that supplied to the program
 * @ary: array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: if the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int arg, char *ary[])
{
	int from, to, rd, wr;
	char *buf;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(ary[2]);
	from = open(ary[1], O_RDONLY);
	rd = read(from, buf, 1024);
	to = open(ary[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", ary[1]);
			free(buf);
			exit(98);
		}

		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", ary[2]);
			free(buf);
			exit(99);
		}

		rd = read(from, buf, 1024);
		to = open(ary[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
