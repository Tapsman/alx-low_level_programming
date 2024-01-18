#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function to allocate memor using malloc
 * @b: The size to allocate
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
