#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes a node at a certain index
 *@head:pointer to the nodeint list
 *@index:index to delete at
 *Return:(1) - success (-1) - otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (i == index)
	{
		if (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
	}
	else
	{
		temp = *head;
		while (i < (index - 1) && temp)
		{
			i++;
			temp = temp->next;
		}
		if (temp)
		{
			node = temp;
			temp = temp->next;
			node->next = temp->next;
			free(temp);
		}
		else
			return (-1);
	}
	return (1);
}
