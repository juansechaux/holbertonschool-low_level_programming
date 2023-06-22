#include "main.h"

/**
  * print_last_digit - computes the absolute value of an integer
  * @r: valor
  * Return: Always 0.
  */
int print_last_digit(int r)
{

	if (r < 0)
	{
	r = r * -1;
	return (r % 10);
	}
	else
	r = r % 10;
	return (r);
}

