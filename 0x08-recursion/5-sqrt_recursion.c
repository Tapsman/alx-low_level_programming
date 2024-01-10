#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate
 * Return: The result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - Recures to find the natural square
 * root of a number
 * @n: The number to calculate
 * @i: The iterator
 * Return: The result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
