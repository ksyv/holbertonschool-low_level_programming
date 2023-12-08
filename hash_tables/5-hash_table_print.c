#include "hash_tables.h"
/**
 *hash_table_print - print a hash table
 *@ht:hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *testNode;
	int test = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (testNode = ht->array[index]; testNode != NULL;
			testNode = testNode->next)
		{
			if (test == 1)
				printf(", ");
			printf("'%s': '%s'", testNode->key, testNode->value);
			test = 1;
		}
	}
	printf("}\n");
}
