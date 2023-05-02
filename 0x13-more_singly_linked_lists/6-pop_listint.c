#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t
 *linked list, and returns the head node’s data (n).
 *@head:double pointer to the first node of the list
 *Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	current = *head;
	*head = (*head)->next;

	free(current);

	return (data);
}
