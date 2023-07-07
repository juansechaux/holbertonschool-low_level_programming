#include<stdio.h>
#include"main.h"

/**
 * _memcpy - funcion memset
 *@dest: pointer destination
 *@src: pointer origin
 *@n: number in bytes to copy
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);

}

