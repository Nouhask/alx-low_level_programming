#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reading the text file that print to STDOUT
 * @filename: the text file that being read
 * @letters: num of letters to be read
 * Return: w- actual num of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t y;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(fd, bf, letters);
	y = write(STDOUT_FILENO, bf, r);

	free(bf);
	close(fd);
	return (y);
}
