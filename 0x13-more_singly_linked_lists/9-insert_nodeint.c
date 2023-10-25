#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a node at a certain index
 *@head:pointer to listint
 *@idx:index of list to add new node
 *@n:new node data
 *Return:pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node;
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (i == idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	i = 0;
	while (temp->next && i < (idx - 1))
	{
		i++;
		temp = temp->next;
	}
	if (idx > (i + 1))
	{
		free(new);
		return (NULL);
	}
	node = temp->next;
	temp->next = new;
	new->next = node;
	return (new);
}
