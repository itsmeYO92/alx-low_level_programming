#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry point
 *
 * @c : char to check
 * Description: check if char c is lowercase
 *
 * Return: 1 if upper 0 if not
*/
int _isupper(char c)
{

	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

