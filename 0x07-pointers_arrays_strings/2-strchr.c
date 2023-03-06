#include "main.h"

/**
 * _strchr - fills the first n bytes in memory with constant byte
 *
 * @s: pointer to string
 *
 * @c: char to be found
 *
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
