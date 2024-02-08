#include "main.h"
/**
 * get_endianness - A function that checks for endianness
 * Return: 0 if big endian or 1 if is little endian
 */
int get_endianness(void)
{
	int p;
	char *t;

	p = 1;
	t = (char *) & p;
	return (*t);
}
