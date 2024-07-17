#include "search_algos.h"
/**
 * interpolation_search - This is a function that will search
 * for a value in a sorted array using the interpolation algorithm
 * @array: The array that will be inputed
 * @size: Is the size of the array
 * @value: Is the value that will be searched through
 * Return: Always the index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, smll, big;
double f;

if (array == NULL)
return (-1);

smll = 0;
big = size - 1;

while (size)
{
f = (double)(big - smll) / (array[big] - array[smll]) * (value - array[smll]);
pos = (size_t)(smll + f);
printf("Value checked array[%d]", (int)pos);

if (pos >= size)
{
	printf(" is out of range\n");
	break;
}
else
{
	printf(" = [%d]\n", array[pos]);
}

if (array[pos] == value)
	return ((int)pos);

if (array[pos] < value)
smll = pos + 1;
else
big = pos - 1;

if (smll == big)
	break;
}

return (-1);
}
