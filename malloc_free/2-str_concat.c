#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 *str_concat - funcion
 *@s1: array1
 *@s2: array2
 *Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, c, t, x;
	char *conca;

	i = 0;
	c = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[c] != '\0')
	{
		c++;
	}

	conca = malloc(sizeof(char) * (i + c + 1));
	for (t = 0; t < i; t++)
	{
		conca[t] = s1[t];
	}

	x = 0;
	while (t <= (i + c))
	{
		conca[t] = s2[x];
		t++;
		x++;
	}
	return (conca);
}

