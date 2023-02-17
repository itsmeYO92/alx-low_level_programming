#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the alphabets to the standard output using only putchar
 *
 * Return: 0 if successful
*/
int main(void)
{
	char i;

	for (i = 'a'; i < 'z' + 1; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}

