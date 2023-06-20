#include <stdio.h>
/**
 * main - funcion de prositivo, negativo
 * comment - "2-print_alphabet.c"
 * Return:0
 */
int main(void)
{
	char alfabeto;

	for (alfabeto = 'z'; alfabeto >= 'a'; alfabeto--)
		putchar(alfabeto);
	putchar('\n');
	return (0);
}
