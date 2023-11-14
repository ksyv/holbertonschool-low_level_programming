#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: the name who print
 * @f: the fonction for print
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
