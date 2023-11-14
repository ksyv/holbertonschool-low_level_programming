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
	if (separator == NULL)
		separator = "";
	printf("%d", va_arg(valist, int));
	for (index = 1; index < n; index++)
		printf("%s %d", separator, va_arg(valist, int));
	va_end(valist);
	printf("\n");
}
