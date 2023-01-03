#include "main.h"

/**
 * _strstr - function that finds the first occurrence of a substring
 * @needle: substing
 * @haystack: string
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{

	char *hay, *need;

	while (*haystack)
	{

		hay = haystack;
		need = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			need++;
		}

		if (!*need)
			return (hay);

		haystack = hay + 1;
	}
	return (0);
}
