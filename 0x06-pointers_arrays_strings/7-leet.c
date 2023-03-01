#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * leet - capitalise every word in string
 *
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *leet(char *s)
{
	int i, j = 0;
	char *let = "aeotl";
	char *num = "43071";

	for (i = 0; i < 5; i++)
	{
		j = 0;
		while (*(s + j) != '\0')
		{
			if (*(s + j) == *(let + i) || *(s + j) == *(let + i) - 32)
				*(s + j) = *(num + i);
			j++;
		}
	}
	return (s);

}
