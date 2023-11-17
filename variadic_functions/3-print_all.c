#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_char - prints a char.
 * @arg: arguments pointed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - prints an int.
 * @arg: arguments pointed
 */
void print_int(va_list arg)
{
int num;

num = va_arg(arg, int);
printf("%d", num);
}
/**
 * print_float - Prints a float.
 * @arg: arguments pointed
 */
void print_float(va_list arg)
{
float number;

number = va_arg(arg, double);
printf("%f", number);
}
/**
 * print_string - prints a string.
 * @arg: arguments pointed
 */
void print_string(va_list arg)
{
char *string;

string = va_arg(arg, char *);

if (string == NULL)
{
printf("(nil)");
return;
}

printf("%s", string);
}
/**
 * print_all - print anything
 * @format: prints strings, list of types of arguments.
 * @...: other arguments
*/
void print_all(const char * const format, ...)
{
	va_list listofargument;
	unsigned int index = 0, index2 = 0;
	char *separator = "";
	choiceprintfunction_t typeofarg[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_start(listofargument, format);
	while (format && (*(format + index)))
	{
		index2 = 0;

		while (index2 < 4 && (*(format + index) != *(typeofarg[index2].symbol)))
			index2++;

		if (index2 < 4)
		{
			printf("%s", separator);
			typeofarg[index2].print(listofargument);
			separator = ", ";
		}

		index++;
	}

	printf("\n");

	va_end(listofargument);
}

