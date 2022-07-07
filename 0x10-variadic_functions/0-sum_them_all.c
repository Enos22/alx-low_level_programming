#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: arguments
 * @...: arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, result;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (a = result = 0; a < n; a++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
