#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 *
 * Return: nothing
 */
void _put(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
