#include "lists.h"
/**
 * free_listint - Function that free's a linked list
 * @head: The listint_t to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
