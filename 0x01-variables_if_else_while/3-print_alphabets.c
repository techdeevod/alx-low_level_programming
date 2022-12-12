#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: Main is to print lower and upper case alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	for (; x <= 'z'; x++)
		putchar(x);
	for (; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
