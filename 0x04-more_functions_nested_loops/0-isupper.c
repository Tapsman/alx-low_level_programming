#include <stdio.h>
#include "main.h"
/**
 * _isupper - Function checks for uppercase character
 * @c: Function prameter
 * Return: 1 on success 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
