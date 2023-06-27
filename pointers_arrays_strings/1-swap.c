#include<stdio.h>
#include"main.h"

/**
 * swap_int - Change the value of n troug a pointer
 *@a: variable to change
 *@b: Variable to change2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	
}

