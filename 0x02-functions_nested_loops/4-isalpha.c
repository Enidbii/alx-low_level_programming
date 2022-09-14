#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input character
 * Return: 0
 */
int _isalpha(int c)
{
	char low, upp;
	int ret_urn = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upp = 'A'; upp <= 'Z'; upp++)
		{
			if (c == low || c == upp)
				ret_urn = 1;
		}
		return(ret_urn);
	}
}
