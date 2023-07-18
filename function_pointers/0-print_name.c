#include<stdio.h>
#include "function_pointers.h"

/**
 *print_name - funtion pointer to print name
 *@name: name to print.
 *@f: Funtion to point.
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

