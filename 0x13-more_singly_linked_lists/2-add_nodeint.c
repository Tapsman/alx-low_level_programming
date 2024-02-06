#include "lists.h"
/**
 * add_nodeint - A function that adds a new node at
 * the start of a linked list
 * @head: Pointer to the first node
 * @n: The data to be inserted in the new node
 * Return: NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
