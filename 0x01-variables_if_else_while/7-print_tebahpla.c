#include <stdio.h>
/**
 * main - A program to print lower case alphabets in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'z' ; low >= 'a' ; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
