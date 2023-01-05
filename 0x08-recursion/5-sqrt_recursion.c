#include "main.h"

/**
 * _sqrt - calculate natural square root
 * @n: number to calculate its square root
 * @m: iterates from 1 to n
 *
 * Return: 1 success
 */
int _sqrt(int n, int m)
{
	if (m * m == n)
		return(m);

	if (m * m > n)
		return (-1);

	return (_sqrt(n, m + 1));
}

/**_sqrt_recursion - Returns the natural square root of a number
 * @n: calculate the natural square root of n
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return(_sqrt(n, 1));
}
