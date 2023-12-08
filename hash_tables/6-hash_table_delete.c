#include "hash_tables.h"
/**
 *hash_table_delete - delete a hash table
 *@ht:hash table you want to delete
 */
void hash_table_delete(hash_table_t *ht)

{
	unsigned long int index = 0;
	hash_node_t *nodeToDelete;
	hash_node_t *temporaryNode;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (nodeToDelete = ht->array[index]; nodeToDelete != NULL;
			 nodeToDelete = temporaryNode)
		{
			temporaryNode = nodeToDelete->next;
			free(nodeToDelete->key);
			free(nodeToDelete->value);
			free(nodeToDelete);
		}
	}
	free(ht->array);
	free(ht);
}
