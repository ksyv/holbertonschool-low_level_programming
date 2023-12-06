#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: array's size.
 * Return: pointer to the new hash table or NULL if error .
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable;
	unsigned long int index;

	newHashTable = malloc(sizeof(hash_table_t));
	if (newHashTable == NULL)
		return (NULL);
	newHashTable->size = size;
	newHashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newHashTable->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		newHashTable->array[index] = NULL;

	return (newHashTable);
}
