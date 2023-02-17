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

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}

