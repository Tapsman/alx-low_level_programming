#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for an alphabetic character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
