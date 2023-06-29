#include<stdio.h>
#include"main.h"

/**
 * _strncat - concatenate 2 strings whit n caracters
 *@dest: string 1
 *@src: string 2
 *@n: numbers of caracters of the string 2
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (src[c] == '\0')
		{
			dest[c] = src[c];
			break;
		}
		else
		{
		dest[c] = src[c];
		}
	}
	return (dest);

}



