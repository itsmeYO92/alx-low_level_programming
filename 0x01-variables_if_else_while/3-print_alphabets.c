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
		putchar(i);
	}
	for (i = 'A'; i < 'Z' + 1; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

