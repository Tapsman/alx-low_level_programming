#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node of a
 * dlinked list
 * @head: Is the head of the list
 * @index: Is the index of the nth node
 * Return: The nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int t;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;
	t = 0;

	while (head != NULL)
	{
		for (t = 0 ; t <= index ; t++)
		{
			head = head->next;
		}
	}
	return (head);
}
