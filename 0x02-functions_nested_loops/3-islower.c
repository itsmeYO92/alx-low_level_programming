#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * @c : char to check
 * Description: check if char c is lowercase
 *
 * Return: 1 if lower 0 if not
*/
int _islower(int c)
{

	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

