#include "variadic_functions.h"
/**
 * print_numbers - A function to print numbers followed
 * by a new line
 * @n: Number of parameters
 * @separator: To separate numbers
 * Return: Always 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
