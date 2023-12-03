#include "lists.h"
/**
 * dlistint_len -a function that returns the number of elements in a linked list.
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
