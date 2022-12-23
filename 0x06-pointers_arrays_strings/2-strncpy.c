#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	
	for (; i < n; i++)
		dest[i] = '\0'
	}

	return (dest);
}
