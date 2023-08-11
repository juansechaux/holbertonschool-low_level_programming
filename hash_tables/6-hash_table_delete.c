#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	hash_node_t *current;
	hash_node_t *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			current = p;
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			p = next;
		}
	}
	free(ht->array);
	free(ht);
}

