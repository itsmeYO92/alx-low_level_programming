#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * cap_string - capitalise every word in string
 *
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;
	int stat  = 1;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (stat == 1)
			{
				*(s + i) -= 32;
				stat = 0;
			}
		}
		else if (('0' <= *(s + i) && *(s + i) <= '9') || *(s + i) == '-')
			stat = 0;
		else if (*(s + i) <= 'A' || *(s + i) >= 'Z')
			stat = 1;
		else
			stat = 0;
		i++;
	}
	return (s);

}
