#include "lists.h"


/**
 * add_node - This is the function that prints all the elements of a list
 * @head: pointer
 *@str: string
 * Return: the numbers of nodes
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

