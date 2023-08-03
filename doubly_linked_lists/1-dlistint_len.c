#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the header of the nodes
 * Return: the numbers of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *actual = h;

	while (actual != NULL)
	{
		actual = actual->next;
		i++;
	}
	return (i);
}

