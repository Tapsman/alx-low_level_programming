#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: Input
 * @accept: Input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n, value, check;

	value = 0;
	check = 1;

	for (i = 0 ; s[i] != '\0' ; i++)
	{

		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
}
