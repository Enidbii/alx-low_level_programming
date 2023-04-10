#include "hash_tables.h"
#include <stddef.h>

/**
 * *hash_table_create - creates hashtable
 * @size: size of hashtable
 * Return: hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
	unsigned long int i;

	table->size = size;
	table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
