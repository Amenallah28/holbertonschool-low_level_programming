#include "main.h"
/**
 * reverse_array -a function that reverses the content of an array of integers.
 *
 * @a: array
 * @n: the position of array
 *
 */
void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
