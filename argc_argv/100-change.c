#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int tot, res;

	if (argc != 1)
	{
		printf("%s\n", "Error")
		return(1);
	}
	tot = atoi(argv[1]);
	if (tot < 0)
	{
		printf("%d\n", 0);
	res = tot / 25 + (tot % 25) / 10 + ((tot % 25) % 10) / 5 + (((tot % 25) % 10) % 5) / 2 + ((((tot % 25) % 10) % 5) % 2);
	printf("%d\n", res);
	return (0);
}
