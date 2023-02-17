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
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

