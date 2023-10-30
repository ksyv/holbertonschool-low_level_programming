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
	int r = 0, i;
	char e[] = "Error";

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			r += atoi(argv[i]);
		}
		else
		{
			printf("%s\n", e);
			return (1);
		}
	}
	printf("%d\n", r);
	return (0);
}
