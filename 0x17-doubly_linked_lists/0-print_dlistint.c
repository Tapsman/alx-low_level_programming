#include "lists.h"
/**
 * print_listint - A function that prints all elements
 * in a dlistint_t
 * @h: Is the head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
