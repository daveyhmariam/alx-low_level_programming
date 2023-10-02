#include "main.h"

/**
 * main - main function
 *
 * @argv: integer
 * @argc: character
 *
 * Return:integer
 */

int main(int argc, const char *argv[])
{
	int read_num, num, fileto, filefrom;
	mode_t permission = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileto = open(argv[2], O_CREAT | O_WRONLY | permission);
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((read_num = read(filefrom, buffer, BUFFER_SIZE)))
	{
		num = write(fileto, buffer, read_num);
	}
	if (num == -1 || fileto == -1)
	{
		fprintf(stderr, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	close(fileto);
	close(filefrom);
	if (fcntl(fileto, F_GETFD) != -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}

	if (fcntl(filefrom, F_GETFD) != -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	return (0);
}
