#include <stdio.h>
#include "main.h"

/**
 * _strlen - swap the value of 2 int
 *
 * @s: string to count
 *
 * return: string lenght
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
