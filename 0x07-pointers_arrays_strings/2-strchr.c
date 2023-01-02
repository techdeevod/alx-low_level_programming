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

	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
