#include<stdio.h>
#include"main.h"

/**
 * _strncpy - concatenate 2 strings whit n caracters
 *@dest: string 1
 *@src: string 2
 *@n: numbers of caracters of the string 2
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int id;

	id = 0;

	while (id < n && src[id] != '\0')
	{
		dest[id] = src[id];
		id++;
	}
	while (id < n)
	{
		dest[id] = '\0';
		id++;
	}

	return (dest);
}

