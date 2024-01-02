#include "main.h"
/**
 * char * _strcpy - A function that copies a string pointed by src
 * @dest: Copy to
 * @src: Copy from
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int 1;
	int x;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for (; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
