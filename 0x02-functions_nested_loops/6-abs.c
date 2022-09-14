#include "main.h"

/**
 * _abs - prints absolute number
 * @r: input integer
 * Return: 0
 */
int _abs(int)
{
	int r;

	if (r < 0)
	{
		r = (-1) * r;
		_putchar(r);
	}
	else
	{
		_putchar(r);
	}
	return (r);
}
