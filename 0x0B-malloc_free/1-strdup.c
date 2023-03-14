#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: pointer to the new string or NULL
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	p = (char *)malloc(1 + sizeof(char) * strlen(str));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		*(p + i) = *(str + i);

	*(p + i) = '\0';
	return (p);
}
