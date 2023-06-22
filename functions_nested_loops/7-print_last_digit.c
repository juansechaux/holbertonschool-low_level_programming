#include "main.h"

/**
  * print_last_digit - computes the absolute value of an integer
  * @r: valor
  * Return: Always 0.
  */
int print_last_digit(int r)
{
	int ultimo;

	ultimo = r % 10;

	if (ultimo < 0)
	{
	ultimo = ultimo * -1;
	}

	_putchar(ultimo + '0');
	return (ultimo);

}

