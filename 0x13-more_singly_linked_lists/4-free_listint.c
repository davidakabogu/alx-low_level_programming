#include "lists.h"

/**
 * free_listint - this function frees a list
 * @head: pointer to the head node in listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *node = head;

	while (node != NULL)
	{
		tmp = node;

		node = node->next;

		free(tmp);
	}
}
