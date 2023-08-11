#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht: table
 * @key: the key
 * Return: value if it succeeded, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	unsigned long int size;
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	size = ht->size;
	index = hash % size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL); /* La clave no fue encontrada en la tabla*/
}

