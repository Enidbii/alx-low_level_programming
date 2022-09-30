#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: no of arguments passed
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i <= argv[i]; i++)
		{
			printf("%d\n", argv[i]);
		}
	}
	return (0);
}
