#include "main.h"
#include <string.h>

/**
 * rev_string - print string in reverse
 *
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0, j = strlen(s) - 1; j >= 0 && i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

