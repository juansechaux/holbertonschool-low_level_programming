#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code
 *@size: tamano del triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int fila, colum, esp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (fila = 0; fila < size; fila++)
		{
			for (colum = size - fila; colum > 1; colum--)
			{
				_putchar(' ');
			}
			for (esp = 0; esp <= fila; esp++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

