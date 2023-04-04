#include "lists.h"

/**
 * sum_listint - this function returns the sum of all the data(n)
 *		of a linked list.
 * @head: pointer to the head node of the linked list
 * Return: returns the sum of all the data in the linked list
 *		or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
