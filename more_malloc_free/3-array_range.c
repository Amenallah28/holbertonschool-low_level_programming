#include "main.h"
#include <stdlib.h>

/**
 * array_range - fonction
 * @min: minimim
 * @max: maximum
 * Return: NULL or the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, x;

	if (min > max)
	{
		return (NULL);
	}
	x = (max - min) + 1;
	array = (malloc(sizeof(int) * x));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		array[i] = min++;
	}
	return (array);
}
