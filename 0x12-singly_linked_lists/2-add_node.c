#include "lists.h"

/**
 * add_node - function that adds a new node at the
 *beginning of a list_t list
 *@head:pointer pointe to the head of list
 *@str:string to be duplicated and add to the list
 * Return:addresse of the new element or NULL if it failled
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}

	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
