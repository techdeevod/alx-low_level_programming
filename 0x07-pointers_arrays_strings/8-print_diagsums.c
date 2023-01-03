#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals
 * of a square matrix
 * @a: square matrix
 * @size: size of the square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int s = 0, sl = 0;

	for (i = 0; i < size; i++)
	{
		s += a[(size * i) + i];
		s1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", s, s1);
}
