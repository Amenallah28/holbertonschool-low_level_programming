#include <stdio.h>
#include <stdlib.h>
/**
 *checknumbers - check for numbers
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0 or 1
 */
int checknumbers(int argc, char **argv)
{
	int x;
	int y;

	for (x = 1; x < argc; x++)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			if ((argv[x][y] < 47) || (argv[x][y] > 58))
			{
				return (0);
			}
			y++;
		}
	}
	return (1);
}
/**
 * main -  a program that adds positive numbers.
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int x;
	int sum = 0;

	if (checknumbers(argc, argv) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			sum = sum + atoi(argv[x]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
