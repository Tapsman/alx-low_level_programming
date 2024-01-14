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
	int t;

	for (t = 0 ; t < argc ; t++)
	{
		printf("%S\n", argv[t]);
	}

	return (0);
}
