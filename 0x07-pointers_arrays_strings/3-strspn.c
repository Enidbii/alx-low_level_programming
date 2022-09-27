#include "main.h"

/**
 *  _strspn - gets the length of a prefix
 *  @s: pointer
 *  @accept: pointer
 *  Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int ct = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == stri1[i])
			{
				ct++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (ct);
}
