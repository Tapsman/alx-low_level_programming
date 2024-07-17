#include "search_algos.h"
/**
 * linear_search - This function will search for a value of
 * an array of integers using linear serach
 * @array: Is the pointer to the first element of the array to search
 * @size: Is the size of the elements in the array
 * @value: Is the value that will be searched
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int lsg;

	if (array == NULL)
		return (-1);

	for (lsg = 0 ; lsg < (int)size ; lsg++)
	{
		printf("Value checked array[%u] = [%d]\n", lsg, array[lsg]);
	if (value == array[lsg])
		return (lsg);
	}
	return (-1);
}
