#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - allocates memory using malloc
 * @s1: first string
 * @s2: second string
 * @n: number of bytes that should be considered from s2
 * Return: pointer to new allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc(sizeof(s1) + n);

	if (p == NULL)
		return (NULL);


	for (i = 0; i < strlen(s1); i++)
		*(p + i) = *(s1 + i);

	for (j = 0; j < n && *(s2 + j) != '\0'; j++)
		*(p + i + j) = *(s2 + j);

	*(p + i + j) = '\0';
	return (p);
}
