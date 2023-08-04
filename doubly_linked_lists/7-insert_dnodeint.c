#include "lists.h"

/**
 * insert_dnodeint_at_index - func that inserts a new node at a given position
 * @h: pointer to the header of the nodes
 * @idx: the index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size;
	unsigned int x = 0;
	dlistint_t *temp2;
	dlistint_t *temp = *h;
	size_t i = 0;
	const dlistint_t *actual = *h;

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	while (actual != NULL)
	{
		actual = actual->next;
		i++;
	}
	size = i;
	if (idx < x || size < idx)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	while (--idx)
		temp = temp->next;
	temp2 = temp->next;
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	if (temp2 != NULL)
		temp2->prev = newNode;
	return (newNode);
}
