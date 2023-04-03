#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node to the end of a list
 * @head: pointer to pointer to the head of the linked list
 * @n: data to be stored in the new node
 * Return: returns a pointer to the address of the new element
 *		or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
