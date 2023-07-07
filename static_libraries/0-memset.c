#include<stdio.h>
#include"main.h"

/**
 * _memset - funcion memset
 *@s: pointer
 *@b: char
 *@n: number or times
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);

}

