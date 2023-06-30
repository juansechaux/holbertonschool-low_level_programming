#include<stdio.h>
#include"main.h"

/**
 * leet - concatenate 2 strings whit n caracters
 *@p: string 1
 * Return: Always 0.
 */

char *leet(char *p)
{

	int c;

	c = 0;

	while (p[c] != '\0')
	{
		if (p[c] == 'a' || p[c] == 'A')
		{
			p[c] = '4';
		}
		else if (p[c] == 'e' || p[c] == 'E')
		{
			p[c] = '3';
		}
		else if (p[c] == 'o' || p[c] == 'O')
		{
			p[c] = '0';
		}
		else if (p[c] == 't' || p[c] == 'T')
		{
			p[c] = '7';
		}
		else if (p[c] == 'l' || p[c] == 'L')
		{
			p[c] = '1';
		}
		c++;
	}
	return (p);
}

