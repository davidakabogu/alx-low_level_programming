#include "lists.h"

/**
 * add_node - this function adds a new node at the beginning
 *		of a linked list
 * @head: pointer to a pointer to the head of the linked list
 * @str: pointer to a null terminated string
 * Return: returns a pointer to the address of the new element
 *		or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (len = 0; str[len]; len++)
	{
		new_node->len = len;
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
