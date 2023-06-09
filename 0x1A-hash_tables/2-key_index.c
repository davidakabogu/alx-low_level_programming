#include "hash_tables.h"

/**
 * key_index - this function uses hash_djb2 function to give the index of a key
 * @key: this is the  key
 * @size: this is the  size of the array of the hash table.
 * Return: returns the index at which the key/value pair
 *		should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
