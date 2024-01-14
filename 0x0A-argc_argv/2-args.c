#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints all the
 * arguments it gets
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%S\n", argv[i]);
	}

	return (0);
}
