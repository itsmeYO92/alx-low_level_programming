#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - variadic function to print
 * @n: number of optional parametres
 * @separator: separator
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pars;


	va_start(pars, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pars, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pars);

}
