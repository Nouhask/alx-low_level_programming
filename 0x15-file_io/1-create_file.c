#include "main.h"

/**
 * create_file - this one create a file
 * @filename: a pointer to the name of the file to be created
 * @text_content: a pointer to the string that being writing to the file
 *
 * Return: If the function fails - -1
 *         Otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int f, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f, text_content, len);

	if (f == -1 || wr == -1)
		return (-1);

	close(f);

	return (1);
}
