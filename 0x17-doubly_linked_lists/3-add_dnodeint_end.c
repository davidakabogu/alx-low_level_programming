#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head node of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_node, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	head_node = *head;

	if (head_node != NULL)
	{
		while (head_node->next != NULL)
			head_node = head_node->next;
		head_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = head_node;

	return (new_node);
}
