#include<stdio.h>
#include"main.h"

/**
 *is_prime_number_helper - funcion aux
 *@n: base aux
 *@divisor: base aux 2
 *Return: Always 0.
 */

int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, divisor + 1));
}

/**
 *is_prime_number - funcion
 *@n: base
 *Return: Always 0
 */

int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}

