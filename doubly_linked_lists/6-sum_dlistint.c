#include "lists.h"
/**
 * sum_dlistint - function that return the sums of all the data
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
