#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int mult = 1, index = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = index - 1; index >= 0; index--)
	{
		char currentChar = b[index];

		if (currentChar == '1')
		{
			decimal += mult;
		}
		mult = mult * 2;
		if (index == 0)
			break;
	}
	return (decimal);
}

