#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: the destination
 * @src: the source to be concatenated to @dest.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *conc;

	for (; dest[len] != '\0'; len++)
		;

	conc = dest + len;
	while (*src != '\0')
		*conc++ = *src++;
	*conc = '\0';

	return (dest);
}
