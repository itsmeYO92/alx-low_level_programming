#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the lent of a string
 *
 * @s: string to count
 *
 * Return: string lenght
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);

}
