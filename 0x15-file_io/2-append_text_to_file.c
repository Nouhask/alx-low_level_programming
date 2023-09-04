#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 *
 * Return: if the function fails or filename is NULL -1
 * if the file does not exist the user lacks write permissions -1
 * 1 if the file exists
 */
int append_text_to_file(const char *filename, char *text_content)
	{
	int rvnk, kpj, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	rvnk = open(filename, O_WRONLY | O_APPEND);
	kpj = write(rvnk, text_content, len);

	if (rvnk == -1 || kpj == -1)
		return (-1);

	close(rvnk);

	return (1);
}
