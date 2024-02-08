#include "main.h"
/**
 * clear_bit - A function that sets a value of a bit to 0
 * at a given index
 * @index: Is the index
 * @n: The parameter
 * Return: 1 on success, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) *  8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
