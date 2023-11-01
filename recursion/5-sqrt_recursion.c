#include "main.h"
/**
 * check - to check
 * @n: int
 * @i:int
 * Return: int
 */
int check(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		check(n, i + 1);
}
/**
 * int _sqrt_recursion - gives the square root of natural num
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (check(n, 2));
}
