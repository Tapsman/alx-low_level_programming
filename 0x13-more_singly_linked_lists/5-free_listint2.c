#include "lists.h"
/**
 * free_listint2 - Function that free's a linked list
 * @head: The pointer to the listint_t list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
