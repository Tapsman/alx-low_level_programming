#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints its name followed
 * by a new line
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
