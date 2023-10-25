#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_nodeint_at_index - gets a node at a certain index
 *@head:pointer to listint
 *@index:whose node we will return
 *Return:pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
