#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints the number of arguments
 * passed into it
 * @argc: The argument count
 * @argv: The argument Vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
