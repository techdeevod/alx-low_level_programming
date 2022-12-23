#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @s: input value
 *
 * Return: char *
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
		if (s[j] >= 97 && s[j] <= 122)
			s[j] -= 32;
	return (s);
}
