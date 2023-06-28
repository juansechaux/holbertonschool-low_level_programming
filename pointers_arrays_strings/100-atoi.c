#include"main.h"
#include<stdio.h>

/**
 * _atoi - Change the value of n troug a pointer src = dest[]
 *@s: pointer to copy
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int a, neg, val;
	unsigned int num;

	a = 0;
	neg = 1;
	num = 0;
	val = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			neg *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			val = 1;
			num = (num * 10) + (s[a] - '0');
			a++;
		}

		if (val == 1)
		{
			break;
		}

		a++;
	}

	num *= neg;
	return (num);
}

