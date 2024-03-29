#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of parameters passed to function
 * @...: a variable number of parameters to calculate sum of
 *
 * Return: If n == 0, return 0 otherwise sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
