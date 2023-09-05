#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 *  Return: 0 if are the same negative number if the first is smaller
 *          positive number if the second is smaller
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && c == 0)
	{
		c = *(s1 + i) - *(s2 + i);
		i++;
	}

	if (c == 0 && _strlen(s1) != _strlen(s2))
		return (_strlen(s1) > _strlen(s2) ? *(s1 + i) : -(*(s2 + i)));
	else
		return (c);

}
