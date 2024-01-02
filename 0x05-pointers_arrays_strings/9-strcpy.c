#include "main.h"
/**
 * char * _strcpy - A function that copies a string pointed by src
 * @dest: Copy to
 * @src: Copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int k;
	int x;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for (; x < k ; x++)
	{
		dest[x] = src[x];
	}
	dest[k] = '\0';
	return (dest);
}
