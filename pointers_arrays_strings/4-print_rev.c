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
	int len = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
		;

	while (i--)
		for (i = len; i >= 0; i--)
		{
			_putchar(s[i]);
		}
}
