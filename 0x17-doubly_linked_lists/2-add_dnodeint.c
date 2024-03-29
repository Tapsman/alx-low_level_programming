#include "lists.h"
/**
 * add_dnodeint - A function that adds a new node at the
 * beginning
 * @n: Is the values of the element
 * @head: Is the head of the list
 * Return: Always the address of the element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;

	if (h != NULL)
		h->prev = new;
	*head = new;

	return (new);
}
