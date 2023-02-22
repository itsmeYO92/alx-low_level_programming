#include "main.h"
/**
 * main - Entry point
 *
 * Description: print sum of multiples of 3 and 5
 *
 * Return: 0 if successful
*/
int main(void)
{
	int i, res = 0;

	for (i = 2; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	_putchar(res + '0');
	_putchar('\n');
	return (0);
}

