#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: table
 * @key: the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

	

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/*Agrega el nodo a la tabla hash (manejando colisiones si es necesario*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		/* Manejar colisiones (por ej, agreg al princi de una lista enlazada)*/
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
}

