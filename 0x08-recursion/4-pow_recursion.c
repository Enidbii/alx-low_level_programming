#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: input integer
 * @y: input integer
 * Return: -1 if y < 0 and int when y> 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (x ^ 0);
	else if (y > 0)
		return (_pow_recursion(x, y));
	else
		return (-1);
}