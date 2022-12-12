#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - return number of elements in a linked dlistint_t list
 * @h: pointer to first node in the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
