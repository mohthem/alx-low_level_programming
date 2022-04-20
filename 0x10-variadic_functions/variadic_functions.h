#ifndef _VARADIAC_FUNC_H
#define _VARADIAC_FUNC_H
#include <stdarg.h>

typedef struct types
{
	char z;
	void (*f)(va_list);
} types_t;
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
