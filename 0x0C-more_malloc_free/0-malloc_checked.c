#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc-checked
 * @b:size to allocate
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
