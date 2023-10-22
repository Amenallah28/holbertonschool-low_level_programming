#include "main.h"
/**
 * more_numbers -prints 10 times the numbers,from 0 to 14
 * @x = char
 * @i = int
 * Return: no return
 */
void more_numbers(void)
{

    char x;
    int i;

    for (i = 0; i < 10; i++)
    {
        for (x = '0'; x <= '14'; x++)
        {
            _putchar(x);
        }
        _putchar('\n');
    }
}