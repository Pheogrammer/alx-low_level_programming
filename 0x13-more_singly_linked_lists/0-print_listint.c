#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - prints all elements of a print_listint list
 *@h:pointer to a listint struct
 *Return:no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
