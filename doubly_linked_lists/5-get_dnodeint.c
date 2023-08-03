#include "lists.h"

/**
 * get_dnodeint_at_index - function that find a node
 * @head: pointer to the header of the nodes
 * @index: index of the node
 * Return: the nth node of a list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	const dlistint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}

