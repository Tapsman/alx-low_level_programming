#include "main.h"
/**
 * binary_to_uint - A function that will convert a binary number
 * to an unsigned int
 * @b: Pointer to string of binary num
 * Return: The converted number or 0 if there is one or
 * more string of chars that is not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (c = 0 ; b[c] != '\0' ; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0 ; b[c] != '\0' ; c++)
	{
		number <<= 1;
		if (b[c] == '1')
		number = number + 1;
	}
	return (number);
}
