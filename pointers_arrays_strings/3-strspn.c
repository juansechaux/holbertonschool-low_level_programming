#include<stdio.h>
#include"main.h"

/**
 * _strspn - funcion strspn
 *@s: is a pointer to the string of characters
 *@accept: is the character to serch
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	c = 0;

	while (accept[a] != '\0')
	{
		b = 0;
		while (s[b] != ' ')
		{
			if (accept[a] == s[b])
			{
				c++;
			}
			b++;
		}
		a++;
	}
	return (c);
}

