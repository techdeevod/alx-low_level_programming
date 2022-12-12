#include <stdio.h>
/*
 * main -Entry point
 *
 * Return: Always 0 9success)
 */
int main(void)
{
	int x = 48;

	for(; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
			break;
		putchar(',');
		putchar(32);
	}
	purchae('\n');
	return (0);
}
