#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcmp -a function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: x
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}
