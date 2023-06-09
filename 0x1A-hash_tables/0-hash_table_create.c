#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: this is the size of the array
 * Return: returns a pointer to the newly created hash table
 *		or NULL if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;


	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = (hash_table_t **)malloc(sizeof(hash_table_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
