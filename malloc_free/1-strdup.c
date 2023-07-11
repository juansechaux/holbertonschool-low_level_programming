#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *_strdup - funcion
 *@str: tamano del array
 *Return: Always 0.
 */

char *_strdup(char *str)
{
	unsigned int c, i;

	char *copia;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	copia = malloc(sizeof(char) * (c + 1));

	if (copia == 0)
	{
		return (NULL);
	}

	i = 0;
	while (i <= c)
	{
		copia[i] = str[i];
		i++;
	}

	return (copia);
}

