#include "lists.h"
/**
 * _strlen - Finds length of a string
 * @str: String to fing length of
 * Return: Length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0 ; str[i] ; i++)
		;
	return(i);
}

