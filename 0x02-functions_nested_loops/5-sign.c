#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: input integer
 * Return: 0
 */
int print_sign(int n)
{
	ret_urn = 0;
	if (n > 0)
	{
		ret_urn == 1;
		_putchar('+');
	}
	elseif (n < 0)
	{
		ret_urn == -1;
		_putchar('-1');
	}
	else
	{
		ret_urn == 0;
		_putchar('0');
	}
	return(ret_urn);
}
