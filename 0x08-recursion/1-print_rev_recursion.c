#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: pointer to string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
