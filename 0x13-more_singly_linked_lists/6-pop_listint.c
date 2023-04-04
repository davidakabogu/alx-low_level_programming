#include "lists.h"

/**
 * pop_listint - this function deletes the head node of linked list
 * @head: pointer to pointer to head node of linked list
 * Return: returns head node's data n
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *node, *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;
	node = current_node->next;
	i = current_node->n;
	free(current_node);
	*head = node;

	return (i);
}
