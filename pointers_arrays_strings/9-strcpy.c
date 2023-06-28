#include"main.h"
#include<stdio.h>

/**
 * _strcpy - Change the value of n troug a pointer src = dest[]
 *@dest: pointer to paste the copy
 *@src: pointer to copy
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}

