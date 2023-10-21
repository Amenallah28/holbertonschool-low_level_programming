#include <stdio.h>

/**
 * main--print the lowercase alphabet in reverse
 *
 * Return:0
 *
 */

int main(void)
{
int x;

for (x = 122; x >= 97 ; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
