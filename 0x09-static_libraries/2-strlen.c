#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: c
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
