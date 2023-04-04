#include "lists.h"

/**
 * free_listint2 - this function frees a list
 * @head: pointer to the head node in listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *node = *head;
	
	if (head != NULL)
	{
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp);
		}
		*head = NULL;
	}
}