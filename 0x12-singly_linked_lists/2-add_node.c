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
	list_t *new_head;
	char *str_dup;
	int len = 0;

	if (str == NULL)
		return (NULL);

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_head);
		return (NULL);
	}

	while (str[len])
		len++;

	new_head->str = str_dup;
	new_head->len = len;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
