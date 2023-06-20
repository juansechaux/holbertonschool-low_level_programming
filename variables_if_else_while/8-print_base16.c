#include <stdio.h>
/**
 * main - funcion de prositivo, negativo
 * comment - "4-print_alphabt.c"
 * Return:0
 */
int main(void)
{
	int Base10;
	int abc;

	for (Base10 = '0'; Base10 <= '9'; Base10++)
	{
		putchar(Base10);
	}
	for (abc = 'a'; abc <= 'f'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}

