#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given point
 * @idx: Index where the new node is added
 * @head: The pointer to the first node in the list
 * @n: Data to insert the new node
 * Return: Pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
	return (NULL);

	new->n = n;
	new->next = NULL;
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0 ; i < idx ; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		temp = temp->next;
	}
	return (NULL);
}
