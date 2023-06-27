#include"main.h"
#include<stdio.h>

/**
 * _strlen - Change the value of n troug a pointer
 *@s: variable to change
 * Return: Always 0.
 */

int _strlen(char *s)
{

	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

