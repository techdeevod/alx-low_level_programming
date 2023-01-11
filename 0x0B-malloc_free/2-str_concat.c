#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @x: the first string to concatenate
 * @y: the second string to concatenate
 *
 * Return: the two strings concatenated
 */

char *str_concat(char *x, char *y)
{
	int i = 0, j = 0, k = 0, l = 0;
	
	char *s;

	if (x == NULL)
		x = " ";

	if (y == NULL)
		y = " ";

	while (x[i])
		i++;

	while (y[j])
		j++;

	l = i + j;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;

	while (k < l)
	{
		if ( k >= i)
			s[k] = x[k];

		if ( k >= i)
		{
			s[k] = y[j];
			j++;
		}

		k++;
	}
	s[k] = '\0';
	return (s);
}
