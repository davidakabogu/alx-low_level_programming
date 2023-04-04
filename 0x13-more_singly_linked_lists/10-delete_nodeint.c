#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes a node at
 *				a given position
 * @head: pointer to pointer to the head node of linked list
 * @index: index of list to delete node
 * Return: returns 1 if successful or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *old_node;

	if (*head == NULL || (index != 0 && (*head)->next== NULL))
		return (-1);

	if (index == 0)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
		return (1);
	}

	old_node = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (old_node->next == NULL)
			return (-1);
		old_node = old_node->next;
	}

	current_node = old_node->next;
	old_node->next = current_node->next;
	free(current_node);

	return (1);
}
