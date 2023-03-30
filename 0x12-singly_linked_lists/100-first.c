#include <stdio.h>

/**
 * pre_run - constructor to print
 * Return: no return.
 */

void __attribute__ ((constructor)) pre_run()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

