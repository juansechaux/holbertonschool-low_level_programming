#include "lists.h"


/**
 * print_list - This is the function that prints all the elements of a list
 * @h: pointer
 * Return: the numbers of nodes
 */


size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *actual = h;

	while (actual != NULL)
	{
		if (actual->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", actual->len, actual->str);
		actual = actual->next;
		i++;
	}
	return (i);
}

