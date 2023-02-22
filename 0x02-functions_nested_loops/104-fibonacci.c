#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print first fibonacci numbers
 *
 * Return: 0 if successful
*/
int main(void)
{
	unsigned long long int i, j = 1, jj = 2, temp;

	printf("%llu, %llu, ", j, jj);
	for (i = 0; i < 96; i++)
	{
		printf("%llu", j + jj);
		if (i != 95)
			printf(", ");
		temp = j;
		j = jj;
		jj = jj + temp;
	}
	printf("\n");
	return (0);
}

