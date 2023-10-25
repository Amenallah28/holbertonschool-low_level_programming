#include "main.h"
#include <string.h>
/**
 * puts_half - prints half
 *@str: string
 */
void puts_half(char *str)
{
	int i;
	int j = strlen(str);

	for (i = (j / 2) + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
