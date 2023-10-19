#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
    if (n <= 98)
    {
    for (; n < 99 ; n++)
    {
    if (n != 98){
        printf("%d, ", n);
    }
    else{
    printf("%d", n);
    }
    }
    printf("\n");
    }
    else if (n == 98)
    {
    printf("%d",n);
    printf("\n");
    }
    else
    {
    for ( ; n > 97 ; n--)
    {
            if (n != 98){
        printf("%d, ", n);
    }
    else{
    printf("%d", n);
    }
    }
    printf("\n");
    }
}
