#include "main.h"

/**
 * times_table - prints the time table.
 *
 * Return: nothing
 */
void times_table(void)
{
	int a, b, k;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			k = a * b;
			if ((k / 10) == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(k + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
