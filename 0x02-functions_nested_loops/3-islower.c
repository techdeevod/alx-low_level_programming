#include "main.h"
/**
 * _islower(int c) checks for lowercase character
 *
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}