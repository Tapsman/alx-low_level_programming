#include "main.h"
/**
 * _memcpy - A function to copy memory area
 * @src: Input
 * @dest: Input
 * @n: Input
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
