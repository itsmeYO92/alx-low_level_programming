#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Print _putchar
 *
 * Return: 0 if successful
*/
int main(void)
{
	int i;
	char str[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}

