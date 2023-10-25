#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint_end - adds a nodeint at the end
 *@head:pointer to head
 *@n:int to add in new node
 *Return:pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		for (; temp->next; temp = temp->next)
			;
		temp->next = new;
	}
	return (new);
}
