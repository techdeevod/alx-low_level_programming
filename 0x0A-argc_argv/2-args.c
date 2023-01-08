#include "main.h"
#include <stdio.h>

/** args.c - prints all arguments it receives
 * @argc: int type
 * @argv: char type
 *
 * Return: prints all argument
 */

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
