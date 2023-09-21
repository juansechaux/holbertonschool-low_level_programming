#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located or -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}

