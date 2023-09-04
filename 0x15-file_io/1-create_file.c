#include "main.h"
/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to be create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: if the function fails -1
 * 1 on success
 */
int create_file(const char *filename, char *text_content)
	{
	int ujd, ljmx, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ujd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ljmx = write(ujd, text_content, len);

	if (ujd == -1 || lmx == -1)
		return (-1);

	close(ujd);

	return (1);
}
