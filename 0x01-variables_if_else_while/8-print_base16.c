#include <stdio.h>
/**
 * main - program to print all numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0' ; d <= '9' ; d++)
	putchar(d);

	for (low = 'a' ; low <= 'f' ; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
