#include "main.h"

/**
 * is_div - check if a number is divisible by another
 *
 * @n: number to check
 *
 * @b: divider
 *
 * Return: 1 if div 0 if not
 */
int is_div(int n, int b)
{

	if (b == 1)
		return (1);
	if (n % b == 0 && b != 1)
		return (0);
	else
		return (1 * is_div(n, --b));


}


/**
 * is_prime_number - check if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_div(n, n - 1));
}
