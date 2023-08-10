#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: the key
 * @size: size of the table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int val = hash_djb2(key);

	index = (val % size);

	return (index);

}
