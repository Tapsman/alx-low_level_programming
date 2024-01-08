#include <stdio.h>
#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: Input
 * @needle: Input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two != '\0')
			return (haystack);
	}
	return (NULL);
}
