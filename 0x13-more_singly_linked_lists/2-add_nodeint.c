#include "lists.h"

/**
 * add_nodeint - add a new node at the start of listint_t list
 * @head: pointer to a pointer to the list
 * @n: element added on the list
 *
 * Return: address of the new element
 * NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->next = *head;
	tmp->n = n;
	*head = tmp;
	return (*head);
}
