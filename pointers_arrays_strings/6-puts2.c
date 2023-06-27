#include"main.h"
#include<stdio.h>

/**
 * puts2 - Change the value of n troug a pointer
 *@str: chars to print
 * Return: Always 0.
 */

void puts2(char *str)
{
	int c, d;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (d = 0; d < c; d += 2)
	{
	_putchar(str[d]);
	}

	_putchar('\n');
}

