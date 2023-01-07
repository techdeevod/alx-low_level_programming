#include "main.h"

/** _abs - returns the absolute value of a number
 * @c: integer
 *
 * Return: Absolute value of a number
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);

	else
		return (c * -1);
}
