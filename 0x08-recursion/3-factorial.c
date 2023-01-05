#include "main.h"

/**
 * factorial - Calculate factorial of a number
 * @n: the number of factorial to be calculated
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return 0;
	
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}		
