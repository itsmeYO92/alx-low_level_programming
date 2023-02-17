#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print numbers from 10 to 9.
 *
 * Return: 0 if successful
*/
int main(void)
{
	int i;
	int x;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (x = j + 1; x < 58; x++)
			{
				putchar(i);
				putchar(j);
				putchar(x);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

