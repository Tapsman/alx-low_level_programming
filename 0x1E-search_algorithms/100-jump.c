#include "search_algos.h"
#include "math.h"
/**
 * jump_search - This is a function that will search for a value
 * in a sorted array of integers using the jump search algorithm.
 * @size: Is the size of the array in the function
 * @array: It is the array that will be searched
 * @value: The value to be searched
 * Return: -1 if the array is present, or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jmp, begin, lim;

	if (!array || size == 0)
		return (-1);
	jmp = (size_t) sqrt(size);
	begin = lim = 0;
	while ((lim < size) && (array[lim] < value))
	{
		printf("Value checked array[%lu] = [%d]\n", lim, array[lim]);
		begin = lim;
		lim = lim + jmp;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", begin, lim);
	lim = lim < size - 1 ? lim : size - 1;
	while ((array[begin] < value) && (begin < lim))
	{
		printf("Value checked array[%lu] = [%d]\n", begin, array[begin]);
		begin++;
	}
	printf("Value checked array[%lu] = [%d]\n", begin, array[begin]);
	return (array[begin] == value ? (int) begin : -1);
}
