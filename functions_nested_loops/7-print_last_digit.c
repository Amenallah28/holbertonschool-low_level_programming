#include "main.h"

/**
 * print_last_digit- a function that prints the last digit of a number.
 * @n: number
 * Return:0
 */

int print_last_digit(int n)
{
int x;
x = n % 10;

while (x >= 10)
{
x = x % 10;
}

if (x <= 0)
{
x = x * -1;
}
_putchar(x + '0');
return (x);
}
