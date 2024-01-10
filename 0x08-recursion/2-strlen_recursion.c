#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: Input
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
