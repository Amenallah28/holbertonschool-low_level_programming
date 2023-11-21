
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator of numbers
 * @n: numbre of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);
	if (n == 0)
	{
		printf("\n");
	}
	else
	{
		s = va_arg(x, unsigned int);
		printf("%d", va_arg(x, unsigned int));
		if (separator != NULL)
		{
			for (i = 0; i < (n - 1); i++)
			{
				printf("%s", separator);
				printf("%d", va_arg(x, unsigned int));
			}
			printf("\n");
		}
		else
		{
			for (i = 0; i < (n - 1); i++)
			{
				printf("%d", va_arg(x, unsigned int));
			}
			printf("\n");
		}
	}
}
