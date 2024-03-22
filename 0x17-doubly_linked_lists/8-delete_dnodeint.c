#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that deletes a node at
 * an index of a linked list
 * @index: Is the index of the new node
 * @head: Is the head of the list
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd1;
	dlistint_t *hd2;
	unsigned int t = 0;

	hd1 = *head;
	if (hd1 != NULL)
		while (hd1->prev != NULL)
			hd1 = hd1->prev;
	while (hd1 != NULL)
	{
		if (t == index)
		{
			if (t == 0)
			{
				*head = hd1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd2->next = hd1->next;
				if (hd1->next != NULL)
					hd1->next->prev = hd2;
			}
			free(hd1);
			return (1);
		}
		hd2 = hd1;
		hd1 = hd1->next;
		t++;
	}
	return (-1);
}
