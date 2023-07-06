#include<stdio.h>
#include"main.h"

/**
 *_sqrt_recursion_aux - funcion aux
 *@n: base aux
 *@y: base aux 2
 *Return: Always 0.
 */

int _sqrt_recursion_aux(int n, int y)
{
	if (n > (y * y))
	{
		y++;
	}
	else if (n < (y * y))
	{
		return (-1);
	}
	else if (n == (y * y))
	{
		return (y);
	}
	return (_sqrt_recursion_aux((n), y++));
}

/**
 *_sqrt_recursion - funcion
 *@n: base
 *Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 1));
}
