#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string between numbers
 * @n: number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index = 0;

	if (n == 0)
		return;
	va_start(valist, n);
		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(valist, int));
			if (index < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	va_end(valist);
	printf("\n");
}
