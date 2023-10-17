#include <stdio.h>

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
