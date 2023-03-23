#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to sum arguments
 * @n: first parametre
 * Return: sum of its parametrs
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pars;

	if (n == 0)
		return (sum);

	va_start(pars, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pars, int);

	va_end(pars);
	return (sum);

}
