#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *_calloc - funcion
 *@nmemb: numero de elementos
 *@size: tamaño de elementos
 *Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(size * nmemb);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ret[i] = 0;
	return (ret);
}

