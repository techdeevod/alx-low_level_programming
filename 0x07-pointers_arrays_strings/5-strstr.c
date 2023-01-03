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
	char *hay = haystack;
	char *need = needle;

	while (*hay)
	{
		need = needle;
		hay = haystack;
		while (*need)
		{
			if (*hay == *need)
			{
				need++;
				hay++;
			}
			else
				break;
		}
		if (*need == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
