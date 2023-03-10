#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print program name
 *
 * @argc: number of parametres
 *
 * @argv: array with parameters
 *
 * Return: 0 if successful
*/
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);

}

