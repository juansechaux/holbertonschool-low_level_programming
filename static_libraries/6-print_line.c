#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code
 *@n: cantidad de "_"
 * Return: Always 0.
 */
void print_line(int n)
{
	int cont;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cont = 0; cont < n; cont++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
