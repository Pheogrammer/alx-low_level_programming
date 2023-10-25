#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data_details;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data_details = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data_details);
}
