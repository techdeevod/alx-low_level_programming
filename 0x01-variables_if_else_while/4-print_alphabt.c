#include <stdio.h>
/*
 * main -Entry point
 *
 * Return: Always 0 (success)
 * */
int main(void)
{
	char x = 'a';
	
	for (; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}	
