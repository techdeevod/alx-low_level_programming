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
       	int s = 0;
	int s1 = 0;
	int mul = size * size;


	for (i = 0; i < mul; i += size + 1)
	{
		s += a[i];
	}

	for (i = size - 1; i < mul - 1; i += size - 1)
	{
		s1 += a[i];
	}

	printf("%d, %d\n", s, s1);
}
