#include <stdio.h>
/*
 * main - Entry point
 *
 *Description: print all different combination of 2 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(32)
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
