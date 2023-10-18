#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3) != 0 && (n % 5) != 0)
		{
			printf("%d ", n);
		}
		else if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((n % 3) != 0 && (n % 5) == 0)
		{
			if (n != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("FizzBuzz ");
		}
	}
	printf("\n");
	return (0);
}
