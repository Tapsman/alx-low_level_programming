#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you
 * would need to flip to get a number to another
 * @n: The first number
 * @m: The second number
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int c, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (c = 63 ; c >= 0 ; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
