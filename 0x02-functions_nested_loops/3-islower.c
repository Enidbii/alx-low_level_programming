#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: input character
 * Return: 0
 */
int _islower(int c)
{
	char d;
	int low_case = 0;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == c)
			low_case = 1;
	}
	return (low_case);
}
