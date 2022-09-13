#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int d;

	for (d = 0; d < 10; d++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
