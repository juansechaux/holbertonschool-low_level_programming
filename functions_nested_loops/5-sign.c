#include "main.h"

/**
 * print_sign - prueba
 * @n: prueba
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar("+");
		return (1);
	}
	else if (n < 0)
	{
		puthcar("-");
		return (-1);
	}
	else
		putchar(0);
		return (0);
}

