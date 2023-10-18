#include "main.h"

int print_last_digit(int n)
{
int x;
x = n % 10;
while (x > 11)
{
x = x % 10;
}
return(x);
}
