#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - frees the contents of a listint_t
 *@head:pointer to list
 *Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	for (temp = head; temp; temp = temp->next)
	{
		free(temp);
	}
}
