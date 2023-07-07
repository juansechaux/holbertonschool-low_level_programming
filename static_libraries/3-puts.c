#include"main.h"
#include<stdio.h>

/**
 * _puts - Change the value of n troug a pointer
 *@str: chars to print
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}

	_putchar('\n');
}

