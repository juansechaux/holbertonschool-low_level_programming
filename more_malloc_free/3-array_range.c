#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *array_range - funcion
 *@min: numero de elementos
 *@max: tamaño de elementos
 *Return: Always 0.
 */

int *array_range(int min, int max)
{
	int i, tam;
	int *array2;

	if (min > max)
	{
		return (NULL);
	}
	tam = max - min + 1;
	array2 = malloc(sizeof(int) * tam);
	if (array2 == NULL)
		return (NULL);
	for (i = 0; i < tam; i++)
		array2[i] = min + i;
	return (array2);
}

