#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *alloc_grid - funcion
 *@width: colum
 *@height: filas
 *Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, c;

	matrix = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		for (c = 0; c < width; c++)
		{
			matrix[i][c] = 0;
		}
	}
	return (matrix);
}

