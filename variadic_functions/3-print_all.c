#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_f - print float
 * @x: float
 * 
 * Return : void
*/
void print_f(va_list x)
{
    printf("%f", va_arg(x, double));
}

/**
 * print_c - print char 
 * @x: char
 * 
 * Return: void
*/

void print_c(va_list x)
{
    printf("%c", va_arg(x,int));
}

/**
 * print_int - print an integer
 * @x: int
 *
 * Return: void
 */
void print_int(va_list x)
{
	printf("%d", va_arg(x, int));
}

/**
 * print_str - print an integer
 * @x: string
 *
 * Return: void
 */
void print_str(va_list x)
{
    char *str;
    if (str==NULL)
    {
        printf("(nil)");
        return;
    }
	printf("%s", str);
}

void print_all(const char *const format, ...)
{
	int i = 0;
	int j;
	char *separator1 = "";
	char *separator2 = ", ";
	va_list x;

	types_t types[] = {
		{'c', print_c},
		{'i', print_int},
		{'f', print_f},
		{'s', print_str},
		{'\0', NULL},
	};
	va_start(x, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type)
			{
				printf("%s", separator1);
				types[j].function(x);
				separator1 = separator2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(x);
}
