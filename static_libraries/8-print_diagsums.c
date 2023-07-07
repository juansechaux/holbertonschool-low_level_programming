#include<stdio.h>
#include"main.h"

/**
 * print_diagsums - funcion
 *@a: is a pointer to the string of characters
 *@size: size of the array
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int fila, colum;

	for (fila = 0; fila < size; fila++)
	{
		for (colum = 0; colum < size; colum++)
		{
			putchar(a[fila][colum]);
		}
		putchar('\n');
	}
}

