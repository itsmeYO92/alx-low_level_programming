#include "main.h"

/**
 * odd_sub - substrace successive odd numbers from n
 *
 * @n: number to calculat
 *
 * @b: base to start from
 *
 * Return: square of n
 */
int odd_sub(int n, int b)
{

	if (n < 0)
		return (-2147483645);
	else if (n == 0)
		return (0);
	else
		return (1 + odd_sub(n - (2 * b + 1), b + 1));


}


/**
 * _sqrt_recursion - calculate the squar of a number
 *
 * @n: number to calculat
 *
 * Return: square of n
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return ((odd_sub(n, 0) > 0 ? odd_sub(n, 0) : (-1)));
}
