#include "lists.h"


/**
 * list_len - function that return the numbers of elements in a linked list
 * @h: pointer
 * Return: the numbers of nodes
 */


size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *actual = h;

	while (actual != NULL)
	{
		actual = actual->next;
		i++;
	}
	return (i);
}

