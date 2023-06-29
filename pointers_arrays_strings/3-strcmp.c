#include<stdio.h>
#include"main.h"

/**
 * _strncpy - concatenate 2 strings whit n caracters
 *@dest: string 1
 *@src: string 2
 *@n: numbers of caracters of the string 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int a, b, result;

	a = 0;
	b = 0;

	while (s1[a] == s2[b])
	{
		if (s1[a] == '\0' || s2[b] == '\0')
		{
			break;
		}
		else
		{
		a++;
		b++;
		}
	}

	result = (s1[a] - s2[b]);
	return (result);
}

