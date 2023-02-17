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
	for (char i='a'; i < 'z'+1; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

