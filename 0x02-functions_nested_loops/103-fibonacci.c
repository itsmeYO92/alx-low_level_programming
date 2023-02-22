#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print sum of fibonacci numbers
 *
 * Return: 0 if successful
*/
int main(void)
{
	long int j = 1, jj = 2, temp;
	long int sum = 0;

	while (jj < 4000000)
	{
		if (jj % 2 == 0)
			sum += jj;
		temp = j;
		j = jj;
		jj += temp;
	}

	printf("%ld\n", sum);
	return (0);
}

