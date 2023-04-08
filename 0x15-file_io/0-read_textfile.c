#include "main.h"

/**
 * read_textfile - read and print from a text file
 * @filename: name of the file
 * @letters: number of letters to readasn print
 * Return: number f printed letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	int file;
	char *str;
	ssize_t nread, nwrite;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	str = malloc(sizeof(char) * letters);
	if (file == -1 || !str)
		return (0);

	nread = read(file, str, letters);
	nwrite = write(1, str, nread);

	free(str);
	close(file);
	return (nwrite);
}
