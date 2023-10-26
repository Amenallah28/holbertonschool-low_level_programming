#include "main.h"
/**
 * _atoi - Convert string to an integer.
 * @s: Pointer
 *
 * Return: void.
 */

int _atoi(char *s)

{
	int i = 0;
	int sign = 1;
	int result = 0;
	int test = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		i++;
	}

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			test = 1;
		}
		else if (test == 1)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
