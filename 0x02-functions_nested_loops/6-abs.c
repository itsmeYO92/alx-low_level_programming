#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 *
 * @n : int to be checked
 *
 * Description: return the absolute value
 *
 * Return: absolute value of n
*/
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}

}

