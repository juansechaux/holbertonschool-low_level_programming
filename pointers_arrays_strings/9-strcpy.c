#include"main.h"
#include<stdio.h>

/**
 * *_strcy - Change the value of n troug a pointer
 *@str: chars to print
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

