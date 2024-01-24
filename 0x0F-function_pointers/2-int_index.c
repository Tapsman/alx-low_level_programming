#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: The array
 * @size: Number of elements in array
 * @cmp: pointer
 * Return: If no element mactches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
