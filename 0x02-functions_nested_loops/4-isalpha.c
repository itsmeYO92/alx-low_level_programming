#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 *
 * @c : charachter to check
 *
 * Description: check if char c is lowercase
 *
 * Return: 1 if lower 0 if not
*/
int _isalpha(int c)
{

	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

