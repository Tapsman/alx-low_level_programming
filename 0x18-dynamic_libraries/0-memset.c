#include "main.h"
/**
 * _memset - A function to fill memory withs a constant byte
 * @s: The pointer destination
 * @b: Constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}

