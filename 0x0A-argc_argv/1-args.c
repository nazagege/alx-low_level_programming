#include <stdio.h>

/**
 * main - print the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}
