#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>


void p_int(va_list arg)
{
	int i = va_arg(arg, int);
	printf("%d", i);
}

void p_float(va_list arg)
{
	float i = va_arg(arg, double);
	printf("%f", i);
}

void p_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

void p_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}


/**
 * print_all - variadic function to print
 * @format: list of types
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *delimetre = "";
	va_list pars;
	format_t ops[] = {
		{"i", p_int},
		{"f", p_float},
		{"c", p_char},
		{"s", p_string},
		{NULL, NULL}
	};

	va_start(pars, format);
	while (format[j] != '\0')
	{
		i = 0;
		while (ops[i].op)
		{
			if (*(ops[i].op) == format[j])
			{
				printf("%s",delimetre);
				ops[i].f(pars);
				delimetre = ", ";
			}
			i++;
		}
		j++;
	}




	printf("\n");
	va_end(pars);

}
