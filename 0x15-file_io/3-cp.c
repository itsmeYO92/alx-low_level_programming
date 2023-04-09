#include "main.h"

/**
 * main - copy a file
 * @ac: number of args
 * @av: args
 * Return: 0
*/

int main(int ac, char **av)
{
	int to_file, from_file;
	int to_flags = O_WRONLY | O_CREAT | O_TRUNC;
	int from_flags = O_RDONLY;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];
	int nread = 1;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_file = open(av[1], from_flags);
	if (from_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_file = open(av[2], to_flags, mode);
	if (to_file == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (nread != 0 && nread != -1)
	{
		nread = read(from_file, buffer, 1024);
		if (nread == -1 || write(to_file, buffer, nread) == -1)
		{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
		}
	}
	close(to_file);
	close(from_file);
	return (0);
}
