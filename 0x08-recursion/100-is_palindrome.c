#include "main.h"
#include <string.h>
/**
 * _strcmp_recursion - compare two strings
 *
 * @s: tring to check
 *
 * @f: first
 *
 * @l: last
 *
 * Return: 1 if are the same 0 if not
 */
int _strcmp_recursion(char *s, unsigned int f, int l)
{

	if (*(s + f) == *(s + l))
	{
		if (f == strlen(s) / 2)
			return (1);
		else
			return (_strcmp_recursion(s, f + 1, l - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if a string is palindrom
 *
 * @s: string to check
 *
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strcmp_recursion(s, 0, strlen(s) - 1));
}
