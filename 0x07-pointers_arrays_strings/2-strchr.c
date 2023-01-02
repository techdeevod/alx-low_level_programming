#include "main.h"

/**
 * _strchr - locate a chracter in a string
 * @c: first occurrence of the character
 * @s: string to check
 *
 * Return: a pointer to the first occurence of the character
 * return NULL if the character is not found
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	
	return (NULL);
}
