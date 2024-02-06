#include "lists.h"
/**
 * pop_listint - Function that deletes the head of a node
 * of a linked list
 * @head: Pointer to the first element
 * Return: The data inside the element that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
