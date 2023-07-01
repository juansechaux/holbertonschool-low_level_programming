#include<stdio.h>
#include"main.h"

/**
 * reset_to_98 - Change the value of n troug a pointer
 *@n: variable to change
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

