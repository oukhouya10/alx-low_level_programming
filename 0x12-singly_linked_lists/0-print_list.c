#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *@h: pointed to first node (head)
 *Return:the number of node
 */
size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num_node++;
		h = h->next;

	}
	return (num_node);
}
