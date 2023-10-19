#include <stdio.h>

/**
 * main - print all the sum of multiples of 3 and 5 bellow 1024
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;
	int m3 = 0;
	int m5 = 0;

	for (a = 0; a < 1024; a = a + 3)
	{
		m3 = m3 + a;
	}
	for (a = 0; a < 1024; a = a + 5)
	{
		m5 = m5 + a;
	}
	printf("%d \n", m3 + m5);
	return (0);
}
