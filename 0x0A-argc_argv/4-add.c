#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - Entry point
 *
 * @c : int to check
 * Description: check if char c is lowercase
 *
 * Return: 1 if digit 0 if not
*/
int _isdigit(int c)
{

	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}


/**
 * main - Entry point
 *
 * @argc: number of parametres
 *
 * @argv: array with parameters
 *
 * Return: 0 if successful
*/
int main(int argc, char **argv)
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (_isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);

}

