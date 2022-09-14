#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print n to 98 followed by a new line
 * @n: input integer
 * Return: 0
 */
void print_to_98(int n)
{
	while (n > 98 || n < 98)
	{
		if (n == 98)
			_putchar(98);
		_putchar((n + 1), ' ');
	}
	_putchar('\n');
}
