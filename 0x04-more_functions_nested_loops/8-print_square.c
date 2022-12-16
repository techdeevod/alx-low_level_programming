#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: the size of the square, remember, length = breath;
 *
 * Return: void;
 */
void print_square(int size)
{
	int l;
	int b;

	if (size <= 0)
		_putchar(10);

	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar(10);
	}
}
