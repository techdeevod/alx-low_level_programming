#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * 
 * Return: 1 if letter otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 || c >= 97) && (c <= 91 || c <= 122))
		return (1);
	else
		return (0);
}
