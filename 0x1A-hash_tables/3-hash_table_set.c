#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hashtable
 * @ht: hashtable made
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *items;
	unsigned long int index, j;
	char *valrec;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valrec = strdup(value);
	if (valrec == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = valrec;
			return (1);
		}
	}
	items = malloc(sizeof(hash_node_t));
	if (items == NULL)
	{
		free(valrec);
		return (0);
	}
	items->key = strdup(key);
	if (items->key == NULL)
	{
		free(items);
		return (0);
	}
	items->value = valrec;
	items->next = ht->array[index];
	ht->array[index] = items;

	return (1);
}
