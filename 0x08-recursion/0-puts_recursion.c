#include "main.h"
/**
 * _puts_recursion - wright a string to std with recursion
 *
 * @s: pointer to string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
