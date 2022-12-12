#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at beginning of dlistint_t list
 * @head: first node
 * @n: element of node to be added
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* allocate space for the newNode */
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	/* put the element in the newNode */
	newNode->n = n;
	/* point the next link to head(current first node) */
	newNode->next = (*head);
	/* point the previous link to null */
	newNode->prev = NULL;

	/**
	 * point the previous link of head to newNode(instead of null)
	 * (if head is not null)
	 */
	if ((*head) != NULL)
		(*head)->prev = newNode;

	/* make newNode pointed to by (as) the head */
	(*head) = newNode;
	return (newNode);
}
