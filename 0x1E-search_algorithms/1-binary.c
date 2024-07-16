#include "search_algos.h"
/**
 * recursive_search - This is a function that will search for
 * a value in the array of the integers using the binary search
 * algorithm
 * @size: It is the size of the array
 * @value: It is the value at which it will be searched
 * @array: The array that will be inputed
 * Return: Always (success) the index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t t;
	size_t segm = size / 2;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);

	printf("Searching in array");

	for (t = 0 ; t < size ; t++)
		printf("%s %d", (t == 0) ? ":" : ",", array[t]);

	printf("\n");

	if (segm && size % 2 == 0)
		segm--;

	if (value == array[segm])
		return ((int)segm);
	if (value < array[segm])
		return (recursive_search(array, segm, value));
	segm++;
	return (recursive_search(array + segm, size - segm, value) + segm);
}
/**
 * binary_search - This is a function that will search for a value in
 * a sorted array of integers
 * @size: It is the size of the array
 * @array: It is the array that will be inputed
 * @value: It is the value at which it will be searched
 * Return: Always (success) the index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int indx;

	indx = recursive_search(array, size, value);
	if (indx >= 0 && array[indx] != value)
		return (-1);

	return (indx);
}
