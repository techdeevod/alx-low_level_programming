#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 * Description: 'Prints possible combination'
 */
int main(void)
{
	int x = 48;

	for (; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
			break;
		putchar(',');
		putchar(32);
	}
	putchar('\n');
	return (0);
}
