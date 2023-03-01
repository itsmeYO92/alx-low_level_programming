#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_toupper - change lower case to upper
 *
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
		i++;
	}
	return (s);

}
