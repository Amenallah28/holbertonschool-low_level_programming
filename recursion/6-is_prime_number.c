#include "main.h"
/**
 * check - to check
 * @n: int
 * @i:int
 * Return: int
 */
int check(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	if (i == n)
		return (1);
	else
		return (check(n, i + 1));
}

/**
 * is_prime_number - to know if the int is a prime num or not
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (check(n, 2))
		return (1);
	else
		return (0);
}
