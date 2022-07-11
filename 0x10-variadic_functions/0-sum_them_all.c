#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	if (n == 0)
		return (0);
	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
