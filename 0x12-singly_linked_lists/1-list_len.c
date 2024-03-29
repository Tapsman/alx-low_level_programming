#include "lists.h"
/**
 * list_len - Function that returns the number
 * of elements in a linked list_t list
 * @h: Name of the list
 * Return: Number of Nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
