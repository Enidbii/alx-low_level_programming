#include "hash_tables.h"

/**
 * hash_table_delete - deletes hashtable
 * @ht: hastable to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *nxt;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				nxt = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = nxt;
			}
		}
	}
	free(head->array);
	free(head);
}
