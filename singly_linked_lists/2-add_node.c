#include "lists.h"
/**
 * add_node-a function that adds a new node at the end of a list_t list.
 * @head:head of the list
 * @str: the string
 * Return:the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
