#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node
 *				at a given position.
 * @head: pointer to pointer to head node of linked list
 * @idx: index of list to add new node. index starts at 0
 * @n: data to be stored at new node.
 * Return: returns a pointer to the address of the new node
 *		or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node = NULL, *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (current_node == NULL && idx != 0)
		return (NULL);
	
	for (i = 0; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
}
