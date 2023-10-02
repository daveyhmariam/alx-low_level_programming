#include "main.h"

/**
 * append_text_to_file - appending a text
 *
 * @filename: the file name
 * @text_content:
 *
 * Return: integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int num, i = 0, fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL || fd == -1)
	return (-1);

	if (text_content == NULL)
	return (1);

	while (text_content[i] != '\0')
	i++;

	num = write(fd, text_content, i);

	if (num == -1)
	return (-1);

	close(fd);

	return (1);
}
