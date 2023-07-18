#include<stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - funtion pointer
 *@array: array.
 *@size: size of the array
 *@action: funtion pointed
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}

