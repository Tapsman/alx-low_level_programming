#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers from 1 to 100 followed by a new line
 * but for the multiples of three prints Fizz instead of fizzbuzz
 * and for the multiples of 5 prints Buzz
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && 1 % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
