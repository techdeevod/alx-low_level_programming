#include "main.h"

/**
 * _strchr - locate a chracter in a string
 * @c: first occurrence of the character
 * @s: string to check
 *
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{

	while (*s != c)
		if (!*s++)
			return (0);

	return (s);
}
