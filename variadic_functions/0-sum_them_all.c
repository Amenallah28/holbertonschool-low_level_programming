#include "variadic_functions.h"
/**
 * sum_them_all - adds all arguments
 * @n: number of arguments
 * @...: ints
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, unsigned int);
	}
	va_end(x);
	return (sum);
}
