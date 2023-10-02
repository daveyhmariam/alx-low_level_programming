#include "main.h"

/**
 * read_textfile - read text from a file
 *
 * @filename: char pointer
 * @letters: size of letter to be read
 *
 * Return: size of read and printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_textfile;
	char *buffer = malloc(sizeof(char) * letters);
	size_t ch_write = 0, ch_read = 0;

	read_textfile = open(filename, O_RDONLY);

	if (read_textfile == -1 || filename == NULL)
	return (0);

	ch_read = read(read_textfile, buffer, letters);
	if (ch_read == (size_t)-1)
	return (0);

	ch_write = write(STDOUT_FILENO, buffer, ch_read);

	if (ch_write == (size_t)-1)
	return (0);

	close(read_textfile);
	free(buffer);

	return (ch_write);
}
