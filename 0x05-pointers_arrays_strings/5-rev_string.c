#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to be reversed.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0;

	int j;

	char tmp;

	for (; s[i] != '\0'; i++)
		;

	for (j = 0; j < (i/2); j++)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i -j - 1] = tmp;
	}
}
