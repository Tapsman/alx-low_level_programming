#include <stdio.h>
/**
 * main - A program to print all single digit numbers
 *of base 10 starting from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
