#include "lists.h"

/**
 * reverse_listint - this function reverses a linked list
 * @head: pointer to pointer to the head node of linked list
 * Return: returns a pointer to the first node of the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
