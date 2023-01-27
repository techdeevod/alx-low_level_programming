#ifndef _LINKED_LIST
#define _LINKED_LIST
#include <stdlib.h>
#include <stdio.h>

typedef struct list_s
{
	char *str;
	unsigned int len;

	struct list_s *next;
} list_t;

int _strlen(const char *s);
int _putchar(char c);
size_t print_list(const list_t *h);

#endif
