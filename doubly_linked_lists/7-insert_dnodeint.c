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
	dlistint_t *temp = *h;
	dlistint_t *temp2;

	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = NULL;
	while (--idx)
		temp = temp->next;
	temp2 = temp->next;

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	temp2->prev = newNode;
	return (*h);
}

