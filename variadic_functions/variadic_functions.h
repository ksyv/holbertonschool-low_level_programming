#ifndef __VARIADIC__
#define __VARIADIC__
#include <stdarg.h>
typedef struct choiceprintfunction
{
	char *symbol;
	void (*print)(va_list arg);

} choiceprintfunction_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
