#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning of a list
 * @head: pointer to pointer to head of linked list
 * @n: data to store in the new node
 * Return: returns a pointer to address of the new element
 *		or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
