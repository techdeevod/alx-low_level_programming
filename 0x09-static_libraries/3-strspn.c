#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment of bytes
 * @accept: contains the byte
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{

	int i, j;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept [j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}

	return (length);
}
