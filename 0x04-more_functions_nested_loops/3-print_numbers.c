#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num);
		_putchar('\n');
	}
}
