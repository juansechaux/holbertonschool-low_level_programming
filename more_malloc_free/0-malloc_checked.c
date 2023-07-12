#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *create_array - funcion
 *@size: tamano del array
 *@c: caracter
 *Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	char *ret;

	ret = malloc(b);
	if (ret == NULL)
	{
		exit(98);
	}
	return(ret);
}

