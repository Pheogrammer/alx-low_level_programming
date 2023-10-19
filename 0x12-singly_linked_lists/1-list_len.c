#include "main.h"

/**
  *list_len - give the number of elements in a list.
  *@h: pointer to list.
  *
  *Return: number of elements in a linked list.
  */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
