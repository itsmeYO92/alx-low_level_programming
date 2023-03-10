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
	int i;

	for (i = 0; i < argc, i++)
		printf("%s\n", argv[i]);

	return (0);

}

