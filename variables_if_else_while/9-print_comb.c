#include <stdio.h>
/**
 * main - funcion de prositivo, negativo
 * comment - "4-print_alphabt.c"
 * Return:0
 */
int main(void)
{
	int Base10;

	for (Base10 = '0'; Base10 <= '9'; Base10++)
	{
		putchar(Base10);
		if (Base10 < '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

