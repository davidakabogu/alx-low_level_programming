#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a linked list
 * @head: pointer to head node of linked list
 * @index: index of the node starting at 0
 * Return: returns nth node of a linked list or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
