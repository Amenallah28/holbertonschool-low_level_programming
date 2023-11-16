#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on an array
 * @array: array
 * @action: the action to be applied to the array
 * @size: size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
