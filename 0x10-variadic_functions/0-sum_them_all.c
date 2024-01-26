#include "variadic_functions.h"
/**
 * sum_them_all - A function that returns a sum of its parameters
 * @n: The parameter to be passed
 * Return: Always: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start ap;

	if (n == 0)
		return (0);

	for (i = 0 ; i < n ; i++)
		sum += var_arg(ap, int);

	va_end(ap);

	return (sum);
}
