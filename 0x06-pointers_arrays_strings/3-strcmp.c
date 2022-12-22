#include "main.h"

/**
 *
 * _strcmp - compares two strings
 * @s1: first 
 * @s2:  second
 *
 * Return: 0 is equal, -ve integer if s1 < s2, if not posirive integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
