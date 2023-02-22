#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
 *
 * return: nothing
*/

void print_times_table(int n)
{
	int res, j, i;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar(48);
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');

				res = i * j;

				if (res <= 9)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + 48);
					_putchar((res / 10) % 10 + 48);
				} else if (res <= 99 && res >= 10)
					_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
