#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argv: the array
 * @argc: size of the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
