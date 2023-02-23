#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 *
 * @c : int to check
 * Description: check if char c is lowercase
 *
 * Return: 1 if digit 0 if not
*/
int _isdigit(int c)
{

	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

