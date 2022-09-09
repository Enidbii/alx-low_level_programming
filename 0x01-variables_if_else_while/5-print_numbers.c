#include <stdio.h>

/**
 * main - prints out all single digits of base ten when executed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
