#include "lists.h"
/**
 * free_dlistint - A function that free's a dlistint
 * @head: Is the head of the list
 * Return: Nothing at all
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
