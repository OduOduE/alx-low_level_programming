#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: first node
 * @index: the index number of the node to be returned
 *
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
