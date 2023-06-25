#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code
 *@size: cantidad de "#"
 * Return: Always 0.
 */
void print_square(int size)
{
	int fila, colum;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else

		for (fila = 0; fila < size; fila++)
		{
			for (colum = 0; colum < size; colum++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

