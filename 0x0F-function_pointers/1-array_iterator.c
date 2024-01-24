#include "function_pointers.h"

/**
 * array_iterator - A function given as a parameter
 * on each element of array
 * @array: Array to execute function from
 * @size: Size of the array
 * @action: Pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
