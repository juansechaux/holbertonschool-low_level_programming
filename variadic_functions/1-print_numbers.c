#include "variadic_functions.h"

/**
  * print_numbers - function that returns the sum
  *@n: number arguments
  *@separator: printed between numbers
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num, unsigned int);

	printf("%d", x);
	if (i < (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(num);

}

