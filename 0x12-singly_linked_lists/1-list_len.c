#include "lists.h"

/**
 * list_len - function that returns the number of elements
 *in a linked list_t list
 *@h:pointed to the head node
 *Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
