#include "lists.h"

/**
 * print_listint - this function prints all the elements of a list
 * @h: pointer to the head of linked list
 * Return: returns the number of nodes of listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
