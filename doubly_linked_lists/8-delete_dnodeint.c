#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: pointer
 * @index: giving position
 *
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && x)
		{
			x = x->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && x)
		{
			if (x->next)
				x->next->prev = x->prev;
			if (x->prev)
				x->prev->next = x->next;
			else
				*head = x->next;
			free(x);
			return (1);
		}
	}
	return (-1);
}
