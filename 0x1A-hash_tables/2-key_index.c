#include "hash_tables.h"
#include "1-djb2.c"

/**
 * key_index - gives you the index of a key
 * @key: pointer to char of table
 * @size: size of the hashtable
 * Return: index in which the key value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
