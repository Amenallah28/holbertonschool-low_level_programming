#include "main.h"
/**
 * rev_string -fuction print a string reverser
 *
 *@s:pointer that point to a string
 */
void rev_string(char *s)
{
	char *begin = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (begin < end)
	{
		char temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
