#include<stdio.h>
#include"main.h"

/**
 * _strpbrk - funcion strspn
 *@s: is a pointer to the string of characters
 *@accept: is the character to serch
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}

