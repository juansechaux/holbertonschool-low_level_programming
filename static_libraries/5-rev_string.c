#include<stdio.h>
#include"main.h"

/**
 * rev_string - prints in reverse
 *@s: chars to print
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int c, d, e;
	char *a, alre;

	c = 0;
	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (d = 1; d < c; d++)
	{
		a++;
	}
	for (e = 0; e < (c / 2); e++)
	{
		alre = s[e];
		s[e] = *a;
		*a = alre;
		a--;
	}
}

