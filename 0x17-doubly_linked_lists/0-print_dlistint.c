#include "lists.h"

/**
 * print_dlistint - prints doubly-linked list
 * @h: addresse of head node
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
