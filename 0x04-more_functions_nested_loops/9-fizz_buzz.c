#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz
 *
 * Return: 0 if successfull.
 */
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i < 100)
				printf("%s ", fizzBuzz);
			else
				printf("%s", fizzBuzz);
		}
		else if (i % 3 == 0)
		{
			if (i < 100)
				printf("%s ", fizz);
			else
				printf("%s", fizz);
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("%s ", buzz);
			else
				printf("%s", buzz);
		}
		else
		{
			if (i < 100)
				printf("%d ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
