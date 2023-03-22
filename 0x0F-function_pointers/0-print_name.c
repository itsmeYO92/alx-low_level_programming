#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: function for how to print the name
 * Return: nothing
*/


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
