#include "main.h"
#include <stdio.h>

/**
 * 0-whatsmyname - prints file name followed by newline
 * @argc: count of integer
 * @argv: type char
 *
 * Return: file name
 */

int main(int argc, char *argv[])
{
	(void) argc;
	
	printf("%s\n", argv[0]);

	return (0);
}
