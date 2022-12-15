#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times 
 * the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int x = 0;

	for (; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
