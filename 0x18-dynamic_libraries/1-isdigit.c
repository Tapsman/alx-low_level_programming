#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Checks for numbers 0 throuh 9
 * @c: Parameter to be checked
 * Return: 1 on success 0 on failure
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
