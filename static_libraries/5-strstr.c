#include<stdio.h>
#include"main.h"

/**
 * _strstr - funcion strstr
 *@haystack: is a pointer to the string of characters
 *@needle: is the character to serch
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	a = 0;
	b = 0;

	while (haystack[a] != '\0')
	{
		while (needle[b] != '\0')
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}

