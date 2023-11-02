#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: int
 * @argv: string
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%i\n", y);

	return (0);
}
