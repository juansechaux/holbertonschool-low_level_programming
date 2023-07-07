#include<stdio.h>
#include"main.h"

/**
 * reverse_array - concatenate 2 strings whit n caracters
 *@a: string 1
 *@n: string 2
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, c, *p, temp;

	i = 1;
	c = 0;
	p = a;

	while (i < n)
	{
		i++;
		p++;
	}
	for (c = 0; c < (i / 2); c++)
	{
		temp = a[c];
		a[c] = *p;
		*p = temp;
		p--;
	}
}

