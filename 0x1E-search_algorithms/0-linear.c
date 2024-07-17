#include "search_algos.h"
/**
 * linear_search - This function will search for a value of
 * an array of integers using linear serach
 * @array: Is the pointer to the first element of the array to search
 * @size: Is the size of the elements in the array
 * @value: IS the value that will be searched
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int t;

	if (array == NULL)
		return (-1);

	for (t = 0 ; t < (int)size ; t++)
	{
		printf("Value checked array[%u] = [%d]\n", t, array[t]);
	if (value == array[t])
		return (t);
	}
	return (-1);
}
