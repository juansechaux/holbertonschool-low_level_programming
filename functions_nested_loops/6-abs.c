#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @r: valor
  * Return: Always 0.
  */
int _abs(int r)
{
	if (r < 0)
	{
	int _abs;

	_abs = r * -1;

	return (_abs);
	}

	return (r);

}
