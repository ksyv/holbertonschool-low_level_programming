#include <stdio.h>

/**
 * main - print all the sum of multiples of 3 and 5 bellow 1024
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a, b, m3, m5 = 0;

	for (a = 0; a < 1024; a = a + 3)
	{
		m3 = m3 + a;
	}
	for (b = 0; b < 1024; b = b + 5)
	{
		m5 = m5 + b;
	}
	printf("%d\n", m3 + m5);
	return (0);
}
