#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest:dest
 * @src: copie
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
