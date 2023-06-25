#include<stdio.h>
/**
 * main - fizbuzz
 *
 * Return: siempre 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", num);
		}
	}
	printf("\n");
	return (0);
}

