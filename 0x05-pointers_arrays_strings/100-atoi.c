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
	int i = 0, res = 0, stat = 0, first, last, len = strlen(s), j = 1;

	for (i = 0; i <= len; i++)
	{
		if ('0' <= *(s + i) && *(s + i) <= '9' && stat == 0)
		{
			first = i;
			stat = 1;
		}
		if (((*s + i) == '\0' || *(s + i) > '9' || *(s + i) < '0') && stat == 1)
		{
			last = i - 1;
			break;
		}
	}

	for (i = last; i >= first; i--)
	{
		res = res + ((*(s + i) - '0') * j);
		j = j * 10;
	}

	if (first > 0)
		if (*(s + first - 1) == '-')
			return (-1 * res);
	return (res);

}
