#include "main.h"

char *create_array(unsigned int size, char c)
{
	int i;
	char *array;
	
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
			array[i] = c;
	}
	return (array);
}
