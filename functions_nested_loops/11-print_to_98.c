#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * followed by a new line
 * @n: first natural int
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n != 98)
	{
		if (n < 98)
		{
			n = n + 1;
			for (; n < 99; n++)
			{
				printf(", %d", n);
			}
		}
		else
		{
			n = n - 1;
			for (; n > 97; n--)
			{
				printf(", %d", n);
			}
		}
	}
	printf("\n");
}

