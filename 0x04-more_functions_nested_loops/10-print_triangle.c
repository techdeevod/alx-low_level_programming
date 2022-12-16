#include "main.h"

/**
 * print triangle - Print triangle, followed by a new line
 * @size: The size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar(10);

	for (a = 0; a < size; a++)
	{
		for (b = (size - 1); b >= 0; b--)
		{
			if (b <= a)
				_ptuchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
