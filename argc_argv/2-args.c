#include <stdio.h>
/**
 * main -  a program that prints all arguments it receives.
 * @argv: the array
 * @argc: size of the array
 * Return: 0
 */
int main(int argc, char **argv)
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
