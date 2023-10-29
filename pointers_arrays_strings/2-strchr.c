#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: string to check for
 * Return: string value
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (NULL);
}
