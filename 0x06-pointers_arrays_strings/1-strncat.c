#include "main.h"

/**
 * _strncat - concatenates n number of characters
 * from src to dest
 * @dest: string destination
 * @src: source to be concatenated
 * @n: the number of bytes of src to be concatenated
 *
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *str;

	for (i = 0; dest[i] != '\0'; i++)
		;
	str = dest + i;
	while (*src != '\0' && n--)
		*str++ = *src++;

	*str = '\0';
	return (dest);
}
