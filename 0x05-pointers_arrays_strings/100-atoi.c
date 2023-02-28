#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _atoi - converts a string to int
 *
 * @s: string to convert
 *
 * Return: int from string
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int res = 0;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			res = res * 10 + (*s - '0');
		else if (res > 0)
			break;
	} while (*s++);
	return (res * i);
}
