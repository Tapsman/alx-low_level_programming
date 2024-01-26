#include "variadic_functions.h"
/**
 * print_strings - Prints the strings passed to functions separated
 * by separator
 * @separator: Separates strings
 * @n: Is the number of unnamed parameters
 * Return: Always 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
