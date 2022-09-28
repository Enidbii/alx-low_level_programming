#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: input integer
 * Return: int and -1 when n does not have a square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (i == 0 || i == 1)
		return (n);
	else if (i * i == n)
	{
		return (i);
	}
	else
		return (_sqrt_recursion(n));
}
