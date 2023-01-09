#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mul.c - prints multiplication of two numbers
 * @argc: int type
 * @argv: char type
 * @x: first number
 * @y: second number
 * Return: value and 1 if error
 **/

int main(int argc, char *argv[])
{

	int x = 0, y = 0;

	if (argc >= 3)
	{
		x = atoi(argv[1]);

		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
