#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: area to be copied into
 * @src: memory area to copy from
 * @n: number of byte
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
