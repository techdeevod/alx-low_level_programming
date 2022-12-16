#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal;
 * @n: the length if the diagonal;
 *
 * Return: void;
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar(92);
				_putchar(10);
			}
			else
				_putchar(32);
		}
}
