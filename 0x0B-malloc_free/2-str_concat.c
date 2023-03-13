#include <stdlib.h>
#include <string.h>

/**
 * str_concat - duplicate a string
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		*(p + i) = *(s1 + i);
	for (i = strlen(s1); i <= strlen(s1) + strlen(s2); i++)
		*(p + i) = *(s2 + i);

	return (p);
}
