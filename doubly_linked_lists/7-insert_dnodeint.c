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

	size_t i = 0;
	const dlistint_t *actual = *h;

	while (actual != NULL)
	{
		actual = actual->next;
		i++;
	}
	size = i;

	if (idx < x || size < idx)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		add_dnodeint(&*h, n);
		return (*h);
	}
	else if (idx == size)
	{
		add_dnodeint_end(&*h, n);
		return (*h);
	}
	else
	{
		dlistint_t *temp = *h;
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
}

