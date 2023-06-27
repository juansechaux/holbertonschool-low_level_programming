#include"main.h"
#include<stdio.h>

/**
 * puts_half - Change the value of n troug a pointer
 *@str: chars to print
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int c, d;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (d = (c / 2); d < c; d++)
	{
	_putchar(str[d]);
	}

	_putchar('\n');
}

