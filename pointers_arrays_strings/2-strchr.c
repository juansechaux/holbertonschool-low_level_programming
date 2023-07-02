#include<stdio.h>
#include"main.h"

/**
 * _strchr - funcion strchr
 *@s: is a pointer to the string of characters
 *@c: is the character to serch
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}

