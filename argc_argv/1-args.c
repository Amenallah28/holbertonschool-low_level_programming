#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: the array
 * @argc: size of the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
