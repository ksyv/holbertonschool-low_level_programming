#include <stdio.h>
#include <stdlib.h>
/**
 * main - add all numbers
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int r = 0;
	int i, j;
	char e[] = "Error";
	char *t;

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		t = argv[i];

		for (j = 0; t[j]; j++)
		{
			if (t[j] < '0' || t[j] > '9')
			{
				printf("%s\n", e);
				return (1);
			}
		}
		r += atoi(argv[i]);
	}
	printf("%ld\n", r);
	return (0);
}
