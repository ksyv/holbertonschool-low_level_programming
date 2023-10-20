#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int f;

	while (n > 1)
	{
		f = 2;
		while ((n % f) != 0)
		{
			f++;
		}
		n = n / f;
	}
	printf("%d\n", f);
	return (0);
}
