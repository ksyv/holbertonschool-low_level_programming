#include <stdio.h>
/**
 * main - print fibonacci's 50 first numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;
	unsigned long int b = 1, c = 0, c1, c2, b1, b2;

	for (a = 1; a < 92; a++)
		if (a % 2 != 0)
		{
			c = b + c;
			printf("%ld, ", c);
		}
		else
		{
			b = b + c;
			printf("%ld, ", b);
		}
	c1 = c / 100000000000;
	c2 = c % 100000000000;
	b1 = b / 100000000000;
	b2 = b % 100000000000;
	for (; a < 98; a++)
		if (a % 2 != 0)
		{
			c1 += b1;
			c2 += b2;
			if (c2 > 99999999999)
			{
				c2 = c2 - 100000000000;
				c1++;
			}
			printf("%ld%ld, ", c1, c2);
		}
		else
		{
			b1 += c1;
			b2 += c2;
			printf("%ld%ld, ", b1, b2);
		}
	b1 += c1 + 1;
	b2 += c2 - 100000000000;
	printf("%ld%ld\n", b1, b2);
	return (0);
}
