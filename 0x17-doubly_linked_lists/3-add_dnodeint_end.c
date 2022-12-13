#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to first node
 * @n: element to be in the new node
 *
 * Return: new address of element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* store head in tmp for later use */
	dlistint_t *tmp = *head;
	/* allocate space for newNode */
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/* return Null on failure */
	if (newNode == NULL)
		return (NULL);

	/* put element in newNode */
	newNode->n = n;
	/* point next of newNode to Null */
	newNode->next = NULL;

	/* if linked list is empty, make newNode head */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return newNode;
	}
	/* if linked list isn't empty traverse tmp to last node */
	while (tmp->next != NULL)
		tmp = tmp->next;
	
	/* point prev of newNode to last node (tmp) */
	newNode->prev = tmp;
	/* point next of last node (tmp) to newNode */
	tmp->next = newNode;
	
	return newNode;
}
