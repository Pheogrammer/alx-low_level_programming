#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *unique_node_count - counts no. of unique nodes
 *@head:pointer to a head node
 *Return:number of unique nodes,otherwise 0
 */
size_t unique_node_count(const listint_t *head)
{
	listint_t *hare, *tortoise;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	hare = head->next->next;
	tortoise = head->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
			}

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
		printf("[%p] %d", (void *)head, head->n);
		i++;
		head = head->next;
	}
	return (i);
}
