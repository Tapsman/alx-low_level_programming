#include <stdio.h>
#include "main.h"
/**
 * islower - Checks lowercase character
 * @c: The character to be checked
 * Return: 1 for lower and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
