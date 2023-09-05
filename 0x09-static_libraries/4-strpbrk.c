#include "main.h"

/**
 * _strpbrk - search for a sub_string in a string
 *
 * @s: string to be searched
 *
 * @accept: second string.
 *
 * Return: a pointer to the found bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}

