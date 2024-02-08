#include "main.h"
/**
 * get_endiannes - A function that checks for endiannes
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int t;
	char *b;

	t = 1;
	b = (char *b) & t;
	return (*b);
}
