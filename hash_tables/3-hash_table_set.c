#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key
 * @value: value associate with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	char *valueCopy;
	unsigned long int index, index2;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueCopy = strdup(value);
	if (valueCopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (index2 = index; ht->array[index2]; index2++)
	{
		if (strcmp(ht->array[index2]->key, key) == 0)
		{
			free(ht->array[index2]->value);
			ht->array[index2]->value = valueCopy;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valueCopy);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = valueCopy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
