#include "hash_tables.h"
/**
 * key_index - A function that gives you the index of a key
 * @key: The key (string) to hash
 * @size: Is the size of the hash table
 * Return: Index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
