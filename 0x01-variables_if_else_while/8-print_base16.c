#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 * Decription:print hexadecimal number
 */
int main(void)
{
	char x = 48;

	for (; x <= 57; x++)
		putchar(x);

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
