#include "main.h"

/**
 * rot13 - encode using rot13.
 * @s: input value
 *
 * Return: s
 */

char *rot13(char *a)
{
	int i;
	int j;

	char *m = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *n = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
		for (j = 0; m[j] != '\0'; j++)
			if (a[i] == m[j])
			{
				a[i] = n[j];
				break;
			}
	return (s);
}
