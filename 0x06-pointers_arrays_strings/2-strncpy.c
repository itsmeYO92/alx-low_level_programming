#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenates two string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of char to concatenate
 *
 * Return: pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*int len_dest = strlen(dest);*/
	/*	int len_src = strlen(src);*/
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) != '\0')
			*(dest + i) = *(src + i);
		else
			break;
	}

	*(dest + i) = '\0';

	return (dest);

}
