#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input integer
 * Return: 0
 */
int print_sign(int n)
{
	int ret_urn = 0;

	if (n > 0)
	{
		ret_urn = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		ret_urn = -1;
		_putchar('-');
	}
	else
	{
		ret_urn = 0;
		_putchar('0');
	}
	_putchar('\n');
	return (ret_urn);
}
