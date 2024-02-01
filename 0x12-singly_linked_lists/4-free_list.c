#include "lists.h"
/**
 * free_list A function that frees list_t list
 * @head: Pointer to the first node
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
