#include"main.h"
#include<stdio.h>

/**
 * print_array - Change the value of n troug a pointer
 *@a: pointer
 *@n: number of elements of the array to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int d;
	*a = n;

	for (d = 0; d < n; d++)
	{
		if (d == (n - 1))
		{
			printf("%d", a[d]);
		}
		else
		{
			printf("%d, ", a[d]);
		}
	}
	putchar('\n');
}

