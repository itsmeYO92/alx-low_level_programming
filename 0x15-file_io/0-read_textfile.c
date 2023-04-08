#include "main.h"

/**
 * read_textfile - read and print from a text file
 * @filename: name of the file
 * @letters: number of letters to readasn print
 * Return: number f printed letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char c;
	size_t count = 0;

	if (!file)
		return (0);

	while (fread(&c, sizeof(char), sizeof(char), file) != 0)
		if (count < letters)
			count += write(1, &c, 1);

	return (count);
}
