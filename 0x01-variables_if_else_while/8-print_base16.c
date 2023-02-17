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

	for (i = '0'; i < '9' + 1; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i < 'f' + 1; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

