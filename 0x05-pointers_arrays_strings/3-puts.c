#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: input string
 * Return: 0
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
