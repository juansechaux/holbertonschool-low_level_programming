#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alfabeto;

		for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
		{
			_putchar(alfabeto);
		}

	_putchar('\n');
	}
}

