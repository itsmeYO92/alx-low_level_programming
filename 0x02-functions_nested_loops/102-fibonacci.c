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
	long int i, j = 1, jj = 2, temp;

	printf("%ld, %ld, ", j, jj);
	for (i = 0; i < 48; i++)
	{
		printf("%ld", j + jj);
		if (i != 47)
			printf(", ");
		temp = j;
		j = jj;
		jj = jj + temp;
	}
	printf("\n");
	return (0);
}

