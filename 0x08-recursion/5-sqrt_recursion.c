#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: input integer
 * Return: int and -1 when n does not have a square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else
		return (evaluate(n, i + 1));
	return (0);
}
/**
 * evaluate - finds the square root of a number
 * @n: input integer
 * @i: suare root of n
 * Return: i
 */
int evaluate(int n, int i)
{
	if (n / i == i)
	{
		return (i);
	}
	else if (n / i != i)
	{
		return (evaluate(n, i + 1));
	}
	return (0);
}
