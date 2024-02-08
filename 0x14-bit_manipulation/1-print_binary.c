#include "main.h"
/**
 * _pow - A function that calculates base to the power
 * @base: The base of the exponent
 * @power: The power of the exponent
 * Return: Base to the power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int t;

	number = 1;
	for (t = 1 ; t <= power ; t++)
		number *= b;
	return (number);
}
/**
 * print_binary - A function that prints the binary
 * representation of a number
 * @n: The number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char f;

	f = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			f = 1;
			_putchar(1);
		}
		else if (f == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
