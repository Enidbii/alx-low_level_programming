#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print n to 98 followed by a new line
 * @n: input integer
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		_putchar(n + ' ');
		n++;
	}
	else if (n <= 98)
	{
		_putchar(n + ' ');
		n--;
	}
	_putchar('\n');
}
