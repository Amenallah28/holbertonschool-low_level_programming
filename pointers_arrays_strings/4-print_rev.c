#include "main.h"
#include <string.h>

/**
 * print_rev -prints a reverse string
 *
 * @s:string
 */

void print_rev(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;

	for (; s[i]; i--)
		while (i--)
		{
			_putchar(s[i]);
		}
}
