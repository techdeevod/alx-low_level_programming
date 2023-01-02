#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string
 * @accept: the bytes to search
 *
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept or NULL if no such byte
 */

char *_strpbrk(char *s, char *accept)
{

	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
