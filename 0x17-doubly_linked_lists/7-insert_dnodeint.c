#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to first node in list of nodes
 * @idx: index of the list where the new node should be added
 * @n: element to be in node
 *
 * Return: Null on failure, address of new node on success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count;

	if (h == NULL || newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	while (current)
	{
		if (current->next == NULL && count == idx - 1)
		{
			newNode = add_dnodeint_end(h, n);
			return (newNode);
		}
		else if ((idx - 1) == count)
		{
			newNode->next = current->next;
			newNode->prev = current;
			current->next->prev = newNode;
			current->next = newNode;
			return (newNode);
		}
		count++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
