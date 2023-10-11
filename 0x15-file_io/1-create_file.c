#include "main.h"

/**
 * create_file - creating a file
 *
 * @filename: string
 * @text_content: text to be written
 *
 * Return: integer
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, num = 0, create;
	mode_t permission = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	return (1);

	

	while (text_content[i] != '\0')
	i++;
	create = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permission);
	num = write(create, text_content, i);

	if (num == -1 || create == -1)
	return (-1);

	close(create);

	return (1);
}
