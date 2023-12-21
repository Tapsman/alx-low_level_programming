#include <stdio.h>
#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the charcter __ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1 ; i <= n ; i++)
	{
	_putchar('__');
	}
	_putchar('\n');
	}
}
