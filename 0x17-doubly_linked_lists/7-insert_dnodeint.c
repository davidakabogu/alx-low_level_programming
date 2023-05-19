#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 * @h: pointer to the head node of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node = NULL, *head_node;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head_node = *h;
		i = 1;
		if (head_node != NULL)
			while (head_node->prev != NULL)
				head_node = head_node->prev;
		while (head_node != NULL)
		{
			if (i == idx)
			{
				if (head_node->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head_node->next;
						new_node->prev = head_node;
						head_node->next->prev = new_node;
						head_node->next = new_node;
					}
				}
				break;
			}
			head_node = head_node->next;
			i++;
		}
	}
	return (new_node);
}
