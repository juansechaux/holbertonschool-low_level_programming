#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: pointer to the header of the nodes
 * Return: the numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *actual = h;

	while (actual != NULL)
	{
		printf("%d\n", actual->n);
		actual = actual->next;
		i++;
	}
	return (i);
}

