#include <stdio.h>
/*
 * main - Entry point
 *
 * Different combinations of 3 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x <= 57; x++)
		for (y = 48; y <= 57; y++)
			for (z = 48; z <= 57; z++)
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(32);
					}
				}
	putchar('\n');
	return (0);
}
