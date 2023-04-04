#include "lists.h"

/**
 * free_loop_list - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_loop_list(listptr_t **head)
{
    listptr_t *temp;
    listptr_t *curr;

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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;
    listptr_t *list_addresses_head = NULL, *new_node, *temp_node;

    while (head != NULL)
    {
        new_node = malloc(sizeof(*new_node));
        if (new_node == NULL)
        {
            free_loop_list(&list_addresses_head);
            exit(98);
        }

        new_node->ptr = head;
        new_node->next = list_addresses_head;
        list_addresses_head = new_node;

        temp_node = list_addresses_head;
        while (temp_node->next != NULL)
        {
            temp_node = temp_node->next;
            if (head == temp_node->ptr)
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                free_loop_list(&list_addresses_head);
                return (num_nodes);
            }
        }

        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        num_nodes++;
    }

    free_loop_list(&list_addresses_head);
    return (num_nodes);
}

