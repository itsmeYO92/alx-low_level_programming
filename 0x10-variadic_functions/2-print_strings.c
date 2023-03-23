#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - variadic function to print
 * @n: number of optional parametres
 * @separator: separator
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list pars;


	va_start(pars, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pars, char *);
		printf("%s", str ? str : "(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pars);

}
