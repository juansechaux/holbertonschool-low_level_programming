#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: pointer to the header of the nodes
 * Return: the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

