#include<stdio.h>
#include"main.h"

/**
 * string_toupper - concatenate 2 strings whit n caracters
 *@p: string 1
 * Return: Always 0.
 */

char *string_toupper(char *p)
{

	int c;

	c = 0;

	while (p[c] != '\0')
	{
		if (p[c] >= 97 && p[c] <= 122)
		{
			p[c] -= 32;
		}
		c++;
	}
	return (p);
}

