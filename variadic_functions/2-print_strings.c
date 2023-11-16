#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string between numbers
 * @n: number of integers
 * @...: other arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index = 0;
	char *str = NULL;

	va_start(valist, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
