#include<stdio.h>
#include"main.h"

/**
 * leet - concatenate 2 strings whit n caracters
 *@p: string 1
 * Return: Always 0.
 */

char *leet(char *p)
{
	int a, b, f;

	char l[5] = {'a', 'e', 'o', 't', 'l'};
	char n[5] = {'4', '3', '0', '7', '1'};

	a = 0;
	b = 0;
	f = 5;


	while (p[a] != '\0')
	{
		b = 0;

		while (b < f)
		{
			if (p[a] == l[b] || p[a] + 32 == l[b])
			{
				p[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (p);
}

