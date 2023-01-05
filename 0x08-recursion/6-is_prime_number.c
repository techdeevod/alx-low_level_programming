#include "main.h"

int _prime(int n, int i);
/**
 * is_prime_number - returns true if the number is prime
 * @n: the number to check
 *
 * Return: true if the number is prime
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (_prime(n, i));
}
/**
 * _prime - returns 1 if n is prime
 * @n: number to be checked
 * @i: beginning of the search
 *
 * Return: 1 if n is prime
 */

int _prime(int n, int i)
{
	if (i <= 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}
