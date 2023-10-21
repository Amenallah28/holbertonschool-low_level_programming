#include <stdio.h>

/**
 * main--prints all possible combination of single digits num
 *
 * Return:0
 *
 */

int main(void)
{
int x;

for (x = 48; x < 58; x++)
{
putchar(x);
if (x < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}

