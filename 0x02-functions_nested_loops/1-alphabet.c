#include <stdio.h>
#include "main.h"
/**
 * main - A function to print alphabet followed by new line
 *
 * Return: void
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	_putchar(ch);
	_putchar('\n');
}
