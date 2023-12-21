#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Print num except 2 and 4
 * return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if ((c != 2 && c != 4))
			_putchar(i + '0');
	}
	_putchar('\n');
}
