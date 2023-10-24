#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	while (i--)
	{
		_putchar(s[i]);
	}
}
