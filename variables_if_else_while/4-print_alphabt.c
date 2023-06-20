#include <stdio.h>
/**
 * main - funcion de prositivo, negativo
 * comment - "4-print_alphabt.c"
 * Return:0
 */
int main(void)
{
char alfabeto;
for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
{
if (alfabeto != 'q' && alfabeto != 'e')
putchar(alfabeto);
}
putchar('\n');
return (0);
}
