#include "lists.h"

/**
 * dlistint_len - Counts the length of dlist
 * @h: address of head node
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
