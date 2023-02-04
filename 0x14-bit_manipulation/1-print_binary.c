#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: The number to converts to binery
 *
 * Return; Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}
/**
 * _divide - Function that gives the right shift of a number
 * @n: The number that is right shifted
 *
 * Return: Nothing
 */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
