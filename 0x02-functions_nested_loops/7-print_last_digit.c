#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: input integer
 * Return: value of the last integer
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		last_digit = -1 * (i % 10);
	}
	else
	{
		last_digit = i % 10;
	}
	_putchar(i % 10);
}
