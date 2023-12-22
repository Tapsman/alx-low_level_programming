#include <stdio.h>
/**
 * main - prints numbers from 1 to 100 followed by a new line
 * but for the multiples of three prints Fizz instead of FizzBuzz
 * and for the multiples of 5 prints Buzz
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
