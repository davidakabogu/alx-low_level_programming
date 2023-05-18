#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head node of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *head_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	head_node = *head;

	if (head_node != NULL)
	{
		while (head_node->prev != NULL)
			head_node = head_node->prev;
	}
	new_node->next = head_node;

	if (head_node != NULL)
		head_node->prev = new_node;

	*head = new_node;

	return (new_node);
}
