#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
