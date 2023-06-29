#include<stdio.h>
#include"main.h"

/**
 * _strncat - concatenate 2 strings whit n caracters
 *@dest: string 1
 *@src: string 2
 *@n: numbers of caracters of the string 2
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int id, is;

	id = 0;
	is = 0;

	while (dest[id] != '\0')
	{
		id++;
	}

	while (is < n && src[is] != '\0')
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	

	dest[id] = '\0';

	return (dest);

}



