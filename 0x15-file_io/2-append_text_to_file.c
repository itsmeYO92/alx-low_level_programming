#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of the file
 * @text_content: text
 * Return: 1 if successful -1 if not
*/

int append_text_to_file(const char *filename, char *text_content)
{

	int file;
	int flags = O_WRONLY | O_APPEND;

	if (!filename)
		return (-1);
	file = open(filename, flags);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);

	if (write(file, text_content, strlen(text_content)) == -1)
		return (-1);
	return (1);
}
