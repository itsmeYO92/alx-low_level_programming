#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = _strlen(dest);
	int len_src = _strlen(src);
	int i;

	for (i = 0; i < len_src; i++)
	{
		*(dest + len_dest + i) = *(src + i);
	}

	*(dest + len_dest + i) = '\0';

	return (dest);

}
