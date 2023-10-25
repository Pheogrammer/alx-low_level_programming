#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_listint2 - frees a lisint by setting head to NULL
 *@head:pointer to list
 *Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
