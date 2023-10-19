#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int i, j ;
for(i = 0; i < 10; i++)
   {
     for(j = 0; j < 10 ; j++)
     {
	     if (i*j <10)
	     {
	    printf("  %d",i*j);
	     }
	     if (i*j > 9)
	     {
	    printf(" %d",i*j);
	     }
      }
     printf("\n");
    }
}
