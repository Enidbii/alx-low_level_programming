#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: points to character
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
		return(s);
	else if (*s = '\0')
		return(0);
}
