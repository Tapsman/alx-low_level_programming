#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns a node at a
 * specific index in a linked list
 * @head: The first node
 * @index: Index of the node to be returned
 * Return: Pointer to a node being searched or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
