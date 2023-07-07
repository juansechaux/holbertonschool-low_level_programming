#include<stdio.h>
#include"main.h"

/**
 * _strcat - concatenate 2 strings
 *@dest: string 1
 *@src: string 2
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int id, is;

	id = 0;
	is = 0;

	while (dest[id] != '\0')
	{
		id++;
	}
	for (is = 0; src[is] != '\0'; is++)
	{
		dest[id] = src[is];
		id++;
	}

	dest[id] = '\0';

	return (dest);

}



