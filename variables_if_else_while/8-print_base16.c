#include <stdio.h>

/**
 * main--prints all the numbers of base 16 in lowercase
 *
 * Return:0
 *
 */

int main(void)
{

char x;
char alphabet = 'a';
for (x = '0'; x <= '9' ; x++)
{
putchar(x);
}
while (alphabet <= 'f')
{
putchar(alphabet);

alphabet++;
}
putchar('\n');
return (0);
}
