#include "lists.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: Character is s
 * Return: Value i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - Adds new node at the beginning of list_t list
 * @head: The head of a list_t list
 * @str: Value to insert into the element
 * Return: Number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
