#include<stdio.h>
#include"main.h"

/**
 * print_chessboard - funcion
 *@a: is a pointer to the string of characters
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int fila, colum;

	for (fila = 0; fila < 8; fila++)
	{
		for (colum = 0; colum < 8; colum++)
		{
			putchar(a[fila][colum]);
		}
		putchar('\n');
	}
}

