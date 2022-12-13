#include <stdio.h>
/*
 * main - prints all possible combinations of two digit numbers
 * the numbers should range from 0 to 99
 * all numbers should be printed with two digits. 1 should be printed as 01
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x != 100; X++)
		for (y = 0; y != 100; y++)
			if (y > x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(32);
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(32);
				}
			}
	putchar('\n');
	return (0);;
}
