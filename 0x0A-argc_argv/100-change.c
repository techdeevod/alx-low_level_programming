#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: int type
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount  = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (coins = 0; amount > 0; coins++)
	{
		if (amount >= 25)
			amount -= 25;

		else if (amount >= 10)
			amount -= 10;

		else if (amount >= 5)
			amount -= 5;

		else if (amount >= 2)
			amount -= 2;

		else 
			amount -= 1;
	}

	printf("%d\n", coins);

	return (0);
}
