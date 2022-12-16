#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three print fizz instead of the number and for te
 * multiples pf five print buzz. For numbers which are multiplies of both three
 * and five print FizzBuzz.
 *
 * Return: Always 0;
 */
int main(void)
{
	int i = i;

	for (; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 )
			printf(" Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
