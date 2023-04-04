#include "lists.h"

/**
 * free_listptr - frees a linked list
 * @head: head of a list.
 */
void free_listptr(listptr_t **head)
{
	listptr_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listptr_t *head_ptr, *new_node, *temp_node;
	listint_t *curr_node;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node == NULL)
			exit(98);

		new_node->ptr = *h;
		new_node->next = head_ptr;
		head_ptr = new_node;

		temp_node = head_ptr;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
			if (*h == temp_node->ptr)
			{
				*h = NULL;
				free_listptr(&head_ptr);
				return (num_nodes);
			}
		}
		curr_node = *h;
		*h = (*h)->next;
		free(curr_node);
		num_nodes++;
	}
	*h = NULL;
	free_listptr(&head_ptr);
	return (num_nodes);
}
