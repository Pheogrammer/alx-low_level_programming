#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head:pointer to list's head
 *@n:int to add to new node
 *Return:pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
