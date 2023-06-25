#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check the code
 *@n: cantidad de "_"
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int fila, colum;

	if (n <= 0)
	{
		putchar('\n');
	}
	else

		for (fila = 0; fila < n; fila++)
		{
			for (colum = 0; colum < fila; colum++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
}

