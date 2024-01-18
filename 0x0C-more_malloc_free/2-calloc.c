#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - A function to allocate memory for an array
 * of @size bytes and returns the pointer to the allocated
 * memory
 * @nmemb: Allocate memory of the array
 * @size: Allocate element of size bytes
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb = size);
	if (a == NULL)
		return (NULL);
	for (b = 0 ; b < (nmemb = size) ; b++)
		a[b] = 0;
	return (a);
}
