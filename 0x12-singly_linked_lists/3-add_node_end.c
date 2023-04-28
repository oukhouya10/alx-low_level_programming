#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *@head:pointe to the head of the list
 *@str:string that be add in the list
 *Return:the address of the new element
 *or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int l;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = dup;
	new->l = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
