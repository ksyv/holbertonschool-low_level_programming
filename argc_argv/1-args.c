#include <stdio.h>
/**
 * main - print the number of arguments passed into this program
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
