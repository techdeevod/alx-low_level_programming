#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t linked list
 * and returns the head nodes data (n)
 * @head: head of the list
 * 
 * Return: Nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
