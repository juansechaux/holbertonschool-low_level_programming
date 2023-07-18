#include<stdio.h>
#include "function_pointers.h"

/**
 *int_index - funtion pointer
 *@array: array.
 *@size: size of the array
 *@cmp: funtion pointed
 *Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
		{
			return (c);
		}
	}
	return (-1);
}

