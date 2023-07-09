#include<stdio.h>

/**
 * main - la funcion
 *@argc: cont1
 *@argv: cont2
 *Return: Always 0
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
