#include "main.h"
/**
 * print_err - print error and exit with apropriate exit code
 * @_case: case
 * @file: file name
 * @fd: file descriptor
 * Return: nothing
*/
void print_err(int _case, char *file, int fd)
{
	if (_case == 97)
		dprintf(2, "Usage: cp file_from file_to\n");
	else if (_case == 98)
		dprintf(2, "Error: Can't read from file %s\n", file);
	else if (_case == 99)
		dprintf(2, "Error: Can't write to %s\n", file);
	else if (_case == 100)
		dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(_case);
}

/**
 * main - copy a file
 * @ac: number of args
 * @av: args
 * Return: 0
*/

int main(int ac, char **av)
{
	int to_file, from_file, nread = 1, fdt, fdf;
	int to_flags = O_WRONLY | O_CREAT | O_TRUNC;
	int from_flags = O_RDONLY;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (ac != 3)
		print_err(97, "a", 0);
	from_file = open(av[1], from_flags);
	if (from_file == -1)
		print_err(98, av[1], 0);
	to_file = open(av[2], to_flags, mode);
	if (to_file == -1)
		print_err(99, av[2], 0);
	while (nread > 0)
	{
		nread = read(from_file, buffer, 1024);
		if (nread == -1)
			print_err(98, av[1], 0);
		if (write(to_file, buffer, nread) == -1)
			print_err(99, av[2], 0);
	}
	fdf = close(from_file);
	fdt = close(to_file);
	if (fdt + fdf != 0)
		print_err(100, "a", fdt == -1 ? to_file : from_file);
	return (0);
}
