#include "main.h"
/**
 * Main - a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int c;

	c = 'a';

	while (c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	
}
