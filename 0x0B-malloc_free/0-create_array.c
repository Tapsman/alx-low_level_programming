#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function that creates an array of chars
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: The char to fill in the array
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
