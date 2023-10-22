#include "main.h"

/**
*print_numbers-prints the numbers,from 0 to 9,followed by a new line
* @x = char
*Return: void
*/

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	putchar('\n');
}
