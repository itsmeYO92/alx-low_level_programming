#include "main.h"
#include <string.h>
/**
 * _strspn - count number of occurence of chars in a string
 *
 * @s: pointer to string
 *
 * @accept: stirng of accepted chars
 *
 * Return: pointer to the first occurence
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (_strchr(accept, *(s + i)) != NULL)
		i++;

	return (i);


}



/**
 * _strchr - fills the first n bytes in memory with constant byte
 *
 * @s: pointer to string
 *
 * @c: char to be found
 *
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
