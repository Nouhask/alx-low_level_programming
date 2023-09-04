#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints
 * it to the POSIX standard output
 * @filename: the text file that being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
	{
	char *nnss;
	ssize_t lkh;
	ssize_t khnp;
	ssize_t mpg;

	lkh = open(filename, O_RDONLY);
	if (lkh == -1)
		return (0);
	nnss = malloc(sizeof(char) * letters);
	mpg = read(lkh, nnss, letters);
	khnp = write(STDOUT_FILENO, nnss, mpg);

	free(nnss);
	close(lkh);
	return (khnp);
}
