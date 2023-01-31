#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: the head of the linked list
 * @index: the index position
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
