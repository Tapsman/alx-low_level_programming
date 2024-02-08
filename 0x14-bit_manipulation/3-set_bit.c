#include "main.h"
/**
 * set_bit - Function that sets a value of a bit
 * to 1 at a given index
 * @n: The number to set
 * @index: The index to set bit
 * Return: 1 on success, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (-1);
}
