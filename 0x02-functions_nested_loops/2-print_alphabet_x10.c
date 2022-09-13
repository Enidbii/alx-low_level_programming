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

	for (c = 'a'; c <= 'z'; c++)
	{
		d = 0;
		while (d < 10)
		{
			_putchar(d);
			d++;
		}
		_putchar('\n');
	}
}
