#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * 
 * Return: integer value of the converted string
 */

int _atoi(char *s)
{
	
	int num = 1;

	unsigned int numb = 0;

	do {

		if (*s == '-')
			num *= -1;

		else if (*s >= '0' && *s <= '9')

			numb = (numb * 10) + (*s - '0');

		else if (numb > 0)
			break;
	} while (*s++);

	return (numb * num);
}
