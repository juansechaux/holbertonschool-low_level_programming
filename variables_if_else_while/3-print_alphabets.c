#include <stdio.h>
/**
 * main - funcion de prositivo, negativo
 * comment - "3-print_alphabet.c"
 * Return:0
 */
int main(void)
{
char alfabetoMinus;
char alfabetoMayus;
for (alfabetoMinus = 'a'; alfabetoMinus <= 'z'; alfabetoMinus++)
{
putchar(alfabetoMinus);
}
for (alfabetoMayus = 'A'; alfabetoMayus <= 'Z'; alfabetoMayus++)
{
putchar(alfabetoMayus);
}
putchar('\n');
return (0);
}
