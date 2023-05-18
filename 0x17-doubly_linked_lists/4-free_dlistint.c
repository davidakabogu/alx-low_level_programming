#include "lists.h"

/**
 * free_dlistint - this function frees a dlistint_t list
 * @head: pointer to the head node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp_node = head) != NULL)
	{
		head = head->next;
		free(tmp_node);
	}
}
