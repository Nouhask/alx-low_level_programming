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
	char *ns;
	ssize_t kh;
	ssize_t khn;
	ssize_t mp;

	kh = open(filename, O_RDONLY);
	if (kh == -1)
		return (0);
	ns = malloc(sizeof(char) * letters);
	mp = read(kh, ns, letters);
	khn = write(STDOUT_FILENO, ns, mp);

	free(ns);
	close(kh);
	return (khn);
}
