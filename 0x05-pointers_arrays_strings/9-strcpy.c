#include <stdio.h>
#include "main.h"

/**
 * _strcpy  - copy string
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: pointer to new string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
