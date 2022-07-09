#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list)
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _strlen_recursion(char *s);
void print_c(va_list s);
void print_i(va_list s);
void print_f(va_list s);
void print_s(va_list s);

#endif /* _VARIADIC_FUNCTIONS_H_ */
