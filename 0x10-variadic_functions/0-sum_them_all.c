#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums of all its paramters.
 * @n: The number of paramters in a function
 * A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i, sum = 0;

	va_start(pa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);

	return (sum);
}

