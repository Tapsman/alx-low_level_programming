#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function to duplicate a string
 * @str: The string to be duplicated
 * Return: The string duplicated
 */
char *_strdup(char *str)
{
	int a = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) *i) + 1);
		if (s == NULL)
			return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
