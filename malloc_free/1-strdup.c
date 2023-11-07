#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: NULL or string
 */
char *_strdup(char *str)
{
	char *string;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = _strlen(str);
	string = malloc(i * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		string[j] = str[i];
	}
	return (string);
}
