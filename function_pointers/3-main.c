#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: number of argument
 * @argv: arguments
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	char *op = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
