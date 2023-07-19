#include<stdio.h>
#include"3-calc.h"


/**
 * main - funtion
 *@argc: argc
 *@argv: argv
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);

}
