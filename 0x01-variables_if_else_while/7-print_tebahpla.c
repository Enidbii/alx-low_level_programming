#include <stdio.h>

/**
 * main - prints the alphabet in reverse and in
 * lowercase when it executes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
