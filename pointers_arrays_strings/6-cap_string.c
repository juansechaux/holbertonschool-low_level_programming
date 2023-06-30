#include<stdio.h>
#include"main.h"

/**
 * cap_string - concatenate 2 strings whit n caracters
 *@p: string 1
 * Return: Always 0.
 */

char *cap_string(char *p)
{

	int c, i, csow;
	char sow[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', 123, 125};
	csow = 13;

	while (p[c] != '\0')
	{
		i = 0;

		while (i < csow)
		{
			if ((c == 0 || p[c - 1] == sow[i]) && (p[c] >= 97 && p[c] <= 122))
			{
				p[c] -= 32;
			}
			i++;
		}
		c++;
	}
	return (p);
}

