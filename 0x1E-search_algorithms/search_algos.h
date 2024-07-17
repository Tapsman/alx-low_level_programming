#ifndef SORTING_ALGOS_H
#define SORTING_ALGOS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - This is the singly linked list for the struct
 * @n: Is the integer
 * @index: This will be the index of the node in the list
 * @next: This is the pointer to the next node
 * Description: This is a singly linked list for the node structure
 * for Holberton
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - This is a singly linked list
 * @n: Is the integer
 * @next: This is the pointer to the next node
 * @express: This is the pointer to the next node in the express
 * Description: Singly linked list node structure with an express
 * lane for Holberton
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;
int linear_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
