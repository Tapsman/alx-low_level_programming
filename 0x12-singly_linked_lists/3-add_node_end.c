#include "lists.h"
/**
 * _strlen - Finds length of a string
 * @str: String to fing length of
 * Return: Length of a string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0 ; str[i] ; i++)
		;
	return (i);
}
/**
 * add_node_end - Adds a new node at the end of
 * a list_t list
 * @head: Double pointer to linked list
 * @str: The string to add on new node
 * Return: Pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
