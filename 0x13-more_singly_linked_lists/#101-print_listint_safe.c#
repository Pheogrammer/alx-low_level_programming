#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint_safe - prints a listint list
 *@head:pointer to head
 *Return:number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d", head, head->n);
		i++;
		head = head->next;
	}
	return (i);
}