#include<stdio.h>
#include"main.h"

/**
 *_puts_recursion - funcion
 *@s: la variable
 *Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

