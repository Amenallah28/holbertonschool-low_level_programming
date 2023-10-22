#include "main.h"

/**
 * main--prints alphabets in lowercase
 *
 * void
 *
 */

void print_alphabet(void)
{

char alphabet = 'a'; 

while (alphabet <= 'z')
{
_putchar(alphabet);

alphabet++;
}

_putchar('\n');
    
}
