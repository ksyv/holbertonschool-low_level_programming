#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r, a, b;
	char e[] = "Error";

	if (argc < 3)
	{
		printf("%s\n", e);
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	r = a * b;
	printf("%d\n", r);
	return (0);
}
