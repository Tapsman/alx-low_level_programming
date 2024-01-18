#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *array_range - A function that creates an array of int
 * @min: Minimum range of values stored
 * @max: Maximum range of values stored and
 * and number of elements
 * Return: A pointer to a new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) *size);

	if (ptr == NULL)
		return (NULL);
	 for (i = 0 ; min <= max ; i++)
		 ptr[i] = min++;

	 return (ptr);
}
