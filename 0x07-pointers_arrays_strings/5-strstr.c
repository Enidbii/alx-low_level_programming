#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *string1, *string2;

	while (*haystack != '\0')
	{
		string1 = haystack;
		string2 = needle;

		while (*haystack != '\0' && *string2 != '\0' && *haystack == *string2)
		{
			haystack++;
			string2++;
		}
		if (*str2 == '\0')
			return(string1);
		haystack = string1 + 1;
	}
	return(0);
}
